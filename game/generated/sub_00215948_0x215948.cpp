#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00215948
// Address: 0x215948 - 0x215be8
void sub_00215948_0x215948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215948_0x215948");
#endif

    switch (ctx->pc) {
        case 0x21596cu: goto label_21596c;
        case 0x215974u: goto label_215974;
        case 0x215984u: goto label_215984;
        case 0x215994u: goto label_215994;
        case 0x2159d0u: goto label_2159d0;
        case 0x2159e8u: goto label_2159e8;
        case 0x2159f8u: goto label_2159f8;
        case 0x215a08u: goto label_215a08;
        case 0x215a18u: goto label_215a18;
        case 0x215a28u: goto label_215a28;
        case 0x215a38u: goto label_215a38;
        case 0x215a48u: goto label_215a48;
        case 0x215a58u: goto label_215a58;
        case 0x215a90u: goto label_215a90;
        case 0x215aa0u: goto label_215aa0;
        case 0x215ab0u: goto label_215ab0;
        case 0x215ac0u: goto label_215ac0;
        case 0x215ad0u: goto label_215ad0;
        case 0x215ae0u: goto label_215ae0;
        case 0x215ae8u: goto label_215ae8;
        case 0x215af8u: goto label_215af8;
        case 0x215b08u: goto label_215b08;
        case 0x215b48u: goto label_215b48;
        case 0x215b50u: goto label_215b50;
        case 0x215b84u: goto label_215b84;
        case 0x215ba8u: goto label_215ba8;
        case 0x215bb0u: goto label_215bb0;
        case 0x215bb8u: goto label_215bb8;
        default: break;
    }

    ctx->pc = 0x215948u;

    // 0x215948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21594c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21594cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215954: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215958: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x215958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21595c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21595cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x215960: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x215960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x215964: 0xc07e220  jal         func_1F8880
    ctx->pc = 0x215964u;
    SET_GPR_U32(ctx, 31, 0x21596Cu);
    ctx->pc = 0x215968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215964u;
    // 0x215968: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8880u, 0x215964u, 0x21596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21596Cu;
label_21596c:
    // 0x21596c: 0xc09d940  jal         func_276500
    ctx->pc = 0x21596Cu;
    SET_GPR_U32(ctx, 31, 0x215974u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x21596Cu, 0x215974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215974u;
label_215974:
    // 0x215974: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215974u;
    {
        const bool branch_taken_0x215974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215974u;
        // 0x215978: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215974) {
            ctx->pc = 0x215988u;
            goto label_215988;
        }
    }
    ctx->pc = 0x21597Cu;
    // 0x21597c: 0xc08562a  jal         func_2158A8
    ctx->pc = 0x21597Cu;
    SET_GPR_U32(ctx, 31, 0x215984u);
    ctx->pc = 0x215980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21597Cu;
    // 0x215980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2158A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2158A8u, 0x21597Cu, 0x215984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215984u;
label_215984:
    // 0x215984: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x215984u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
label_215988:
    // 0x215988: 0x26828858  addiu       $v0, $s4, -0x77A8
    ctx->pc = 0x215988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x21598c: 0xc086644  jal         func_219910
    ctx->pc = 0x21598Cu;
    SET_GPR_U32(ctx, 31, 0x215994u);
    ctx->pc = 0x215990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21598Cu;
    // 0x215990: 0x8c44002c  lw          $a0, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21598Cu, 0x215994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215994u;
label_215994:
    // 0x215994: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x215994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215998: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x215998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21599c: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x21599cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2159a0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2159A0u;
    {
        const bool branch_taken_0x2159a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159A0u;
        // 0x2159a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159a0) {
            ctx->pc = 0x215A60u;
            goto label_215a60;
        }
    }
    ctx->pc = 0x2159A8u;
    // 0x2159a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2159a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2159ac: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2159acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2159b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2159b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2159b4: 0x8c635900  lw          $v1, 0x5900($v1)
    ctx->pc = 0x2159b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22784)));
    // 0x2159b8: 0x600008  jr          $v1
    ctx->pc = 0x2159B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2159C0u: goto label_2159c0;
            case 0x2159D8u: goto label_2159d8;
            case 0x2159F0u: goto label_2159f0;
            case 0x215A00u: goto label_215a00;
            case 0x215A10u: goto label_215a10;
            case 0x215A20u: goto label_215a20;
            case 0x215A30u: goto label_215a30;
            case 0x215A40u: goto label_215a40;
            case 0x215A50u: goto label_215a50;
            case 0x215A5Cu: goto label_215a5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2159B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2159C0u;
label_2159c0:
    // 0x2159c0: 0x26828858  addiu       $v0, $s4, -0x77A8
    ctx->pc = 0x2159c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x2159c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2159c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159c8: 0xc086f9a  jal         func_21BE68
    ctx->pc = 0x2159C8u;
    SET_GPR_U32(ctx, 31, 0x2159D0u);
    ctx->pc = 0x2159CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2159C8u;
    // 0x2159cc: 0x8c46002c  lw          $a2, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE68u, 0x2159C8u, 0x2159D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2159D0u;
label_2159d0:
    // 0x2159d0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2159D0u;
    {
        const bool branch_taken_0x2159d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159D0u;
        // 0x2159d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159d0) {
            ctx->pc = 0x215A5Cu;
            goto label_215a5c;
        }
    }
    ctx->pc = 0x2159D8u;
label_2159d8:
    // 0x2159d8: 0x26828858  addiu       $v0, $s4, -0x77A8
    ctx->pc = 0x2159d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x2159dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2159dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159e0: 0xc086f9a  jal         func_21BE68
    ctx->pc = 0x2159E0u;
    SET_GPR_U32(ctx, 31, 0x2159E8u);
    ctx->pc = 0x2159E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2159E0u;
    // 0x2159e4: 0x8c46002c  lw          $a2, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE68u, 0x2159E0u, 0x2159E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2159E8u;
label_2159e8:
    // 0x2159e8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2159E8u;
    {
        const bool branch_taken_0x2159e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159E8u;
        // 0x2159ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159e8) {
            ctx->pc = 0x215A5Cu;
            goto label_215a5c;
        }
    }
    ctx->pc = 0x2159F0u;
label_2159f0:
    // 0x2159f0: 0xc0873f2  jal         func_21CFC8
    ctx->pc = 0x2159F0u;
    SET_GPR_U32(ctx, 31, 0x2159F8u);
    ctx->pc = 0x2159F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2159F0u;
    // 0x2159f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CFC8u, 0x2159F0u, 0x2159F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2159F8u;
label_2159f8:
    // 0x2159f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2159F8u;
    {
        const bool branch_taken_0x2159f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159F8u;
        // 0x2159fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159f8) {
            ctx->pc = 0x215A5Cu;
            goto label_215a5c;
        }
    }
    ctx->pc = 0x215A00u;
label_215a00:
    // 0x215a00: 0xc0855d4  jal         func_215750
    ctx->pc = 0x215A00u;
    SET_GPR_U32(ctx, 31, 0x215A08u);
    ctx->pc = 0x215A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A00u;
    // 0x215a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215750u, 0x215A00u, 0x215A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A08u;
label_215a08:
    // 0x215a08: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x215A08u;
    {
        const bool branch_taken_0x215a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A08u;
        // 0x215a0c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a08) {
            ctx->pc = 0x215A5Cu;
            goto label_215a5c;
        }
    }
    ctx->pc = 0x215A10u;
label_215a10:
    // 0x215a10: 0xc087250  jal         func_21C940
    ctx->pc = 0x215A10u;
    SET_GPR_U32(ctx, 31, 0x215A18u);
    ctx->pc = 0x215A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A10u;
    // 0x215a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C940u, 0x215A10u, 0x215A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A18u;
label_215a18:
    // 0x215a18: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x215A18u;
    {
        const bool branch_taken_0x215a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A18u;
        // 0x215a1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a18) {
            ctx->pc = 0x215A5Cu;
            goto label_215a5c;
        }
    }
    ctx->pc = 0x215A20u;
label_215a20:
    // 0x215a20: 0xc0871da  jal         func_21C768
    ctx->pc = 0x215A20u;
    SET_GPR_U32(ctx, 31, 0x215A28u);
    ctx->pc = 0x215A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A20u;
    // 0x215a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C768u, 0x215A20u, 0x215A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A28u;
label_215a28:
    // 0x215a28: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x215A28u;
    {
        const bool branch_taken_0x215a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A28u;
        // 0x215a2c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a28) {
            ctx->pc = 0x215A5Cu;
            goto label_215a5c;
        }
    }
    ctx->pc = 0x215A30u;
label_215a30:
    // 0x215a30: 0xc08682e  jal         func_21A0B8
    ctx->pc = 0x215A30u;
    SET_GPR_U32(ctx, 31, 0x215A38u);
    ctx->pc = 0x21A0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A0B8u, 0x215A30u, 0x215A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A38u;
label_215a38:
    // 0x215a38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x215A38u;
    {
        const bool branch_taken_0x215a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A38u;
        // 0x215a3c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a38) {
            ctx->pc = 0x215A5Cu;
            goto label_215a5c;
        }
    }
    ctx->pc = 0x215A40u;
label_215a40:
    // 0x215a40: 0xc0868a2  jal         func_21A288
    ctx->pc = 0x215A40u;
    SET_GPR_U32(ctx, 31, 0x215A48u);
    ctx->pc = 0x21A288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A288u, 0x215A40u, 0x215A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A48u;
label_215a48:
    // 0x215a48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215A48u;
    {
        const bool branch_taken_0x215a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A48u;
        // 0x215a4c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a48) {
            ctx->pc = 0x215A5Cu;
            goto label_215a5c;
        }
    }
    ctx->pc = 0x215A50u;
label_215a50:
    // 0x215a50: 0xc0c22c8  jal         func_308B20
    ctx->pc = 0x215A50u;
    SET_GPR_U32(ctx, 31, 0x215A58u);
    ctx->pc = 0x215A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A50u;
    // 0x215a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308B20u, 0x215A50u, 0x215A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A58u;
label_215a58:
    // 0x215a58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x215a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_215a5c:
    // 0x215a5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215a60:
    // 0x215a60: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x215a60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x215a64: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x215A64u;
    {
        const bool branch_taken_0x215a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A64u;
        // 0x215a68: 0xa222000e  sb          $v0, 0xE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a64) {
            ctx->pc = 0x215AE0u;
            goto label_215ae0;
        }
    }
    ctx->pc = 0x215A6Cu;
    // 0x215a6c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x215a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x215a70: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x215a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x215a74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215a78: 0x8c635930  lw          $v1, 0x5930($v1)
    ctx->pc = 0x215a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22832)));
    // 0x215a7c: 0x600008  jr          $v1
    ctx->pc = 0x215A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215A88u: goto label_215a88;
            case 0x215A98u: goto label_215a98;
            case 0x215AA8u: goto label_215aa8;
            case 0x215AB8u: goto label_215ab8;
            case 0x215AC8u: goto label_215ac8;
            case 0x215AD8u: goto label_215ad8;
            case 0x215AE0u: goto label_215ae0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x215A84u;
    // 0x215a84: 0x0  nop
    ctx->pc = 0x215a84u;
    // NOP
label_215a88:
    // 0x215a88: 0xc086fde  jal         func_21BF78
    ctx->pc = 0x215A88u;
    SET_GPR_U32(ctx, 31, 0x215A90u);
    ctx->pc = 0x215A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A88u;
    // 0x215a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BF78u, 0x215A88u, 0x215A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A90u;
label_215a90:
    // 0x215a90: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x215A90u;
    {
        const bool branch_taken_0x215a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215a90) {
            ctx->pc = 0x215AE0u;
            goto label_215ae0;
        }
    }
    ctx->pc = 0x215A98u;
label_215a98:
    // 0x215a98: 0xc087424  jal         func_21D090
    ctx->pc = 0x215A98u;
    SET_GPR_U32(ctx, 31, 0x215AA0u);
    ctx->pc = 0x215A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A98u;
    // 0x215a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D090u, 0x215A98u, 0x215AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AA0u;
label_215aa0:
    // 0x215aa0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x215AA0u;
    {
        const bool branch_taken_0x215aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215aa0) {
            ctx->pc = 0x215AE0u;
            goto label_215ae0;
        }
    }
    ctx->pc = 0x215AA8u;
label_215aa8:
    // 0x215aa8: 0xc08717a  jal         func_21C5E8
    ctx->pc = 0x215AA8u;
    SET_GPR_U32(ctx, 31, 0x215AB0u);
    ctx->pc = 0x215AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AA8u;
    // 0x215aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C5E8u, 0x215AA8u, 0x215AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AB0u;
label_215ab0:
    // 0x215ab0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x215AB0u;
    {
        const bool branch_taken_0x215ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215ab0) {
            ctx->pc = 0x215AE0u;
            goto label_215ae0;
        }
    }
    ctx->pc = 0x215AB8u;
label_215ab8:
    // 0x215ab8: 0xc087298  jal         func_21CA60
    ctx->pc = 0x215AB8u;
    SET_GPR_U32(ctx, 31, 0x215AC0u);
    ctx->pc = 0x215ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AB8u;
    // 0x215abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CA60u, 0x215AB8u, 0x215AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AC0u;
label_215ac0:
    // 0x215ac0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x215AC0u;
    {
        const bool branch_taken_0x215ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215ac0) {
            ctx->pc = 0x215AE0u;
            goto label_215ae0;
        }
    }
    ctx->pc = 0x215AC8u;
label_215ac8:
    // 0x215ac8: 0xc0871dc  jal         func_21C770
    ctx->pc = 0x215AC8u;
    SET_GPR_U32(ctx, 31, 0x215AD0u);
    ctx->pc = 0x215ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AC8u;
    // 0x215acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C770u, 0x215AC8u, 0x215AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AD0u;
label_215ad0:
    // 0x215ad0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x215AD0u;
    {
        const bool branch_taken_0x215ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215ad0) {
            ctx->pc = 0x215AE0u;
            goto label_215ae0;
        }
    }
    ctx->pc = 0x215AD8u;
label_215ad8:
    // 0x215ad8: 0xc0c22ca  jal         func_308B28
    ctx->pc = 0x215AD8u;
    SET_GPR_U32(ctx, 31, 0x215AE0u);
    ctx->pc = 0x215ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AD8u;
    // 0x215adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308B28u, 0x215AD8u, 0x215AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AE0u;
label_215ae0:
    // 0x215ae0: 0xc09d940  jal         func_276500
    ctx->pc = 0x215AE0u;
    SET_GPR_U32(ctx, 31, 0x215AE8u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x215AE0u, 0x215AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AE8u;
label_215ae8:
    // 0x215ae8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x215AE8u;
    {
        const bool branch_taken_0x215ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AE8u;
        // 0x215aec: 0x3c13003b  lui         $s3, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ae8) {
            ctx->pc = 0x215B40u;
            goto label_215b40;
        }
    }
    ctx->pc = 0x215AF0u;
    // 0x215af0: 0xc09d964  jal         func_276590
    ctx->pc = 0x215AF0u;
    SET_GPR_U32(ctx, 31, 0x215AF8u);
    ctx->pc = 0x215AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AF0u;
    // 0x215af4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276590u, 0x215AF0u, 0x215AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AF8u;
label_215af8:
    // 0x215af8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x215af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215afc: 0x266888d0  addiu       $t0, $s3, -0x7730
    ctx->pc = 0x215afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936784));
    // 0x215b00: 0x24e60004  addiu       $a2, $a3, 0x4
    ctx->pc = 0x215b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x215b04: 0x0  nop
    ctx->pc = 0x215b04u;
    // NOP
label_215b08:
    // 0x215b08: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x215b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x215b0c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x215b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x215b10: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x215b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x215b14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x215b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x215b18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x215b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215b1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x215b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x215b20: 0x946204f0  lhu         $v0, 0x4F0($v1)
    ctx->pc = 0x215b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x215b24: 0x2a040002  slti        $a0, $s0, 0x2
    ctx->pc = 0x215b24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x215b28: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x215B28u;
    {
        const bool branch_taken_0x215b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B28u;
        // 0x215b2c: 0xa4a20042  sh          $v0, 0x42($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 66), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b28) {
            ctx->pc = 0x215B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215b08;
        }
    }
    ctx->pc = 0x215B30u;
    // 0x215b30: 0x94e305b8  lhu         $v1, 0x5B8($a3)
    ctx->pc = 0x215b30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1464)));
    // 0x215b34: 0x26828858  addiu       $v0, $s4, -0x77A8
    ctx->pc = 0x215b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x215b38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x215B38u;
    {
        const bool branch_taken_0x215b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B38u;
        // 0x215b3c: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b38) {
            ctx->pc = 0x215B9Cu;
            goto label_215b9c;
        }
    }
    ctx->pc = 0x215B40u;
label_215b40:
    // 0x215b40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x215b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b44: 0x267288d0  addiu       $s2, $s3, -0x7730
    ctx->pc = 0x215b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936784));
label_215b48:
    // 0x215b48: 0xc086644  jal         func_219910
    ctx->pc = 0x215B48u;
    SET_GPR_U32(ctx, 31, 0x215B50u);
    ctx->pc = 0x215B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B48u;
    // 0x215b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x215B48u, 0x215B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B50u;
label_215b50:
    // 0x215b50: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x215b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x215b54: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x215b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x215b58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x215b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x215b5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x215b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215b60: 0x2a050002  slti        $a1, $s0, 0x2
    ctx->pc = 0x215b60u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x215b64: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x215B64u;
    {
        const bool branch_taken_0x215b64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x215B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B64u;
        // 0x215b68: 0xa4820042  sh          $v0, 0x42($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 66), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b64) {
            ctx->pc = 0x215B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215b48;
        }
    }
    ctx->pc = 0x215B6Cu;
    // 0x215b6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x215b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215b70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x215b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215b74: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x215B74u;
    {
        const bool branch_taken_0x215b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215b74) {
            ctx->pc = 0x215B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215B74u;
            // 0x215b78: 0x267088d0  addiu       $s0, $s3, -0x7730 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215BA0u;
            goto label_215ba0;
        }
    }
    ctx->pc = 0x215B7Cu;
    // 0x215b7c: 0xc087442  jal         func_21D108
    ctx->pc = 0x215B7Cu;
    SET_GPR_U32(ctx, 31, 0x215B84u);
    ctx->pc = 0x215B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B7Cu;
    // 0x215b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D108u, 0x215B7Cu, 0x215B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B84u;
label_215b84:
    // 0x215b84: 0x266388d0  addiu       $v1, $s3, -0x7730
    ctx->pc = 0x215b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936784));
    // 0x215b88: 0x9224002d  lbu         $a0, 0x2D($s1)
    ctx->pc = 0x215b88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    // 0x215b8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x215b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x215b90: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x215b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x215b94: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x215b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215b98: 0xa4a20042  sh          $v0, 0x42($a1)
    ctx->pc = 0x215b98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 66), (uint16_t)GPR_U32(ctx, 2));
label_215b9c:
    // 0x215b9c: 0x267088d0  addiu       $s0, $s3, -0x7730
    ctx->pc = 0x215b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936784));
label_215ba0:
    // 0x215ba0: 0xc07c2ae  jal         func_1F0AB8
    ctx->pc = 0x215BA0u;
    SET_GPR_U32(ctx, 31, 0x215BA8u);
    ctx->pc = 0x215BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215BA0u;
    // 0x215ba4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0AB8u, 0x215BA0u, 0x215BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BA8u;
label_215ba8:
    // 0x215ba8: 0xc07c2ae  jal         func_1F0AB8
    ctx->pc = 0x215BA8u;
    SET_GPR_U32(ctx, 31, 0x215BB0u);
    ctx->pc = 0x215BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215BA8u;
    // 0x215bac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0AB8u, 0x215BA8u, 0x215BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BB0u;
label_215bb0:
    // 0x215bb0: 0xc086464  jal         func_219190
    ctx->pc = 0x215BB0u;
    SET_GPR_U32(ctx, 31, 0x215BB8u);
    ctx->pc = 0x219190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219190u, 0x215BB0u, 0x215BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BB8u;
label_215bb8:
    // 0x215bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215bbc: 0x26838858  addiu       $v1, $s4, -0x77A8
    ctx->pc = 0x215bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x215bc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x215bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x215bc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215bc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215bcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x215bccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215bd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x215bd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215bd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x215bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215bd8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x215bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x215bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215be0: 0x3e00008  jr          $ra
    ctx->pc = 0x215BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BE0u;
        // 0x215be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215BE8u;
}
