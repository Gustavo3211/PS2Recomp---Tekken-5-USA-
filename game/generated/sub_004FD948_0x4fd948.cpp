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

// Function: sub_004FD948
// Address: 0x4fd948 - 0x4fdc58
void sub_004FD948_0x4fd948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FD948_0x4fd948");
#endif

    switch (ctx->pc) {
        case 0x4fd990u: goto label_4fd990;
        case 0x4fd9b4u: goto label_4fd9b4;
        case 0x4fda28u: goto label_4fda28;
        case 0x4fda44u: goto label_4fda44;
        case 0x4fda54u: goto label_4fda54;
        case 0x4fdae4u: goto label_4fdae4;
        case 0x4fdb18u: goto label_4fdb18;
        case 0x4fdb30u: goto label_4fdb30;
        case 0x4fdb68u: goto label_4fdb68;
        case 0x4fdb74u: goto label_4fdb74;
        case 0x4fdba4u: goto label_4fdba4;
        case 0x4fdbb0u: goto label_4fdbb0;
        case 0x4fdbe0u: goto label_4fdbe0;
        case 0x4fdbecu: goto label_4fdbec;
        case 0x4fdc1cu: goto label_4fdc1c;
        case 0x4fdc24u: goto label_4fdc24;
        case 0x4fdc30u: goto label_4fdc30;
        default: break;
    }

    ctx->pc = 0x4fd948u;

    // 0x4fd948: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4fd948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4fd94c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4fd94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4fd950: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4fd950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4fd954: 0x2442bd58  addiu       $v0, $v0, -0x42A8
    ctx->pc = 0x4fd954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950232));
    // 0x4fd958: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4fd958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4fd95c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fd95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd960: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4fd960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4fd964: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x4fd964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x4fd968: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4fd968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4fd96c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4fd96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4fd970: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4fd970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4fd974: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4fd974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4fd978: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4fd978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4fd97c: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x4fd97cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x72BD60u));
    // 0x4fd980: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x4fd980u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x72BD58u));
    // 0x4fd984: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x4fd984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x4fd988: 0xc13ea86  jal         func_4FAA18
    ctx->pc = 0x4FD988u;
    SET_GPR_U32(ctx, 31, 0x4FD990u);
    ctx->pc = 0x4FD98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD988u;
    // 0x4fd98c: 0xffa40000  sd          $a0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FAA18u, 0x4FD988u, 0x4FD990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD990u;
label_4fd990:
    // 0x4fd990: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4fd990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd994: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4fd994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fd998: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4FD998u;
    {
        const bool branch_taken_0x4fd998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD998u;
        // 0x4fd99c: 0x8e960000  lw          $s6, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd998) {
            ctx->pc = 0x4FDA20u;
            goto label_4fda20;
        }
    }
    ctx->pc = 0x4FD9A0u;
    // 0x4fd9a0: 0x92330032  lbu         $s3, 0x32($s1)
    ctx->pc = 0x4fd9a0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x4fd9a4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x4fd9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4fd9a8: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x4fd9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x4fd9ac: 0xc13e66c  jal         func_4F99B0
    ctx->pc = 0x4FD9ACu;
    SET_GPR_U32(ctx, 31, 0x4FD9B4u);
    ctx->pc = 0x4FD9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD9ACu;
    // 0x4fd9b0: 0x53980a  movz        $s3, $v0, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F99B0u, 0x4FD9ACu, 0x4FD9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD9B4u;
label_4fd9b4:
    // 0x4fd9b4: 0x9223003a  lbu         $v1, 0x3A($s1)
    ctx->pc = 0x4fd9b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x4fd9b8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4fd9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4fd9bc: 0x8485d738  lh          $a1, -0x28C8($a0)
    ctx->pc = 0x4fd9bcu;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x72D738u));
    // 0x4fd9c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4fd9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4fd9c4: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4FD9C4u;
    {
        const bool branch_taken_0x4fd9c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD9C4u;
        // 0x4fd9c8: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd9c4) {
            ctx->pc = 0x4FDA38u;
            goto label_4fda38;
        }
    }
    ctx->pc = 0x4FD9CCu;
    // 0x4fd9cc: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x4fd9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x4fd9d0: 0x284200f1  slti        $v0, $v0, 0xF1
    ctx->pc = 0x4fd9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x4fd9d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FD9D4u;
    {
        const bool branch_taken_0x4fd9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FD9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD9D4u;
        // 0x4fd9d8: 0x96440000  lhu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd9d4) {
            ctx->pc = 0x4FD9FCu;
            goto label_4fd9fc;
        }
    }
    ctx->pc = 0x4FD9DCu;
    // 0x4fd9dc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x4fd9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4fd9e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FD9E0u;
    {
        const bool branch_taken_0x4fd9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD9E0u;
        // 0x4fd9e4: 0x41a02  srl         $v1, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd9e0) {
            ctx->pc = 0x4FDA00u;
            goto label_4fda00;
        }
    }
    ctx->pc = 0x4FD9E8u;
    // 0x4fd9e8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4fd9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x4fd9ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4fd9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4fd9f0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x4fd9f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd9f4: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x4fd9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x4fd9f8: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x4fd9f8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_4fd9fc:
    // 0x4fd9fc: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x4fd9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_4fda00:
    // 0x4fda00: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4fda00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4fda04: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4FDA04u;
    {
        const bool branch_taken_0x4fda04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FDA04u;
        // 0x4fda08: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fda04) {
            ctx->pc = 0x4FDA3Cu;
            goto label_4fda3c;
        }
    }
    ctx->pc = 0x4FDA0Cu;
    // 0x4fda0c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x4fda0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4fda10: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4FDA10u;
    {
        const bool branch_taken_0x4fda10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fda10) {
            ctx->pc = 0x4FDA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FDA10u;
            // 0x4fda14: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FDA3Cu;
            goto label_4fda3c;
        }
    }
    ctx->pc = 0x4FDA18u;
    // 0x4fda18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4FDA18u;
    {
        const bool branch_taken_0x4fda18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fda18) {
            ctx->pc = 0x4FDA3Cu;
            goto label_4fda3c;
        }
    }
    ctx->pc = 0x4FDA20u;
label_4fda20:
    // 0x4fda20: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x4FDA20u;
    SET_GPR_U32(ctx, 31, 0x4FDA28u);
    ctx->pc = 0x4FDA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDA20u;
    // 0x4fda24: 0x24130080  addiu       $s3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x4FDA20u, 0x4FDA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDA28u;
label_4fda28:
    // 0x4fda28: 0x9623003a  lhu         $v1, 0x3A($s1)
    ctx->pc = 0x4fda28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x4fda2c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4fda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4fda30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fda30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fda34: 0x24524200  addiu       $s2, $v0, 0x4200
    ctx->pc = 0x4fda34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16896));
label_4fda38:
    // 0x4fda38: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x4fda38u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fda3c:
    // 0x4fda3c: 0xc042d60  jal         func_10B580
    ctx->pc = 0x4FDA3Cu;
    SET_GPR_U32(ctx, 31, 0x4FDA44u);
    ctx->pc = 0x4FDA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDA3Cu;
    // 0x4fda40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0x4FDA3Cu, 0x4FDA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDA44u;
label_4fda44:
    // 0x4fda44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fda44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fda48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fda48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fda4c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FDA4Cu;
    SET_GPR_U32(ctx, 31, 0x4FDA54u);
    ctx->pc = 0x4FDA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDA4Cu;
    // 0x4fda50: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FDA4Cu, 0x4FDA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDA54u;
label_4fda54:
    // 0x4fda54: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x4fda54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x4fda58: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4fda58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4fda5c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x4fda5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x4fda60: 0x8c67cec0  lw          $a3, -0x3140($v1)
    ctx->pc = 0x4fda60u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x56CEC0u));
    // 0x4fda64: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x4fda64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4fda68: 0x8c84cec4  lw          $a0, -0x313C($a0)
    ctx->pc = 0x4fda68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CEC4u));
    // 0x4fda6c: 0x10e4000f  beq         $a3, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x4FDA6Cu;
    {
        const bool branch_taken_0x4fda6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x4FDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FDA6Cu;
        // 0x4fda70: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fda6c) {
            ctx->pc = 0x4FDAACu;
            goto label_4fdaac;
        }
    }
    ctx->pc = 0x4FDA74u;
    // 0x4fda74: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x4fda74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4fda78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4FDA78u;
    {
        const bool branch_taken_0x4fda78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FDA78u;
        // 0x4fda7c: 0x26350008  addiu       $s5, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fda78) {
            ctx->pc = 0x4FDAB0u;
            goto label_4fdab0;
        }
    }
    ctx->pc = 0x4FDA80u;
    // 0x4fda80: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x4fda80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4fda84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4FDA84u;
    {
        const bool branch_taken_0x4fda84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FDA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FDA84u;
        // 0x4fda88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fda84) {
            ctx->pc = 0x4FDAB0u;
            goto label_4fdab0;
        }
    }
    ctx->pc = 0x4FDA8Cu;
    // 0x4fda8c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4fda8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4fda90: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x4fda90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4fda94: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x4fda94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4fda98: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x4fda98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4fda9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4fda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fdaa0: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x4fdaa0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4fdaa4: 0x1012  mflo        $v0
    ctx->pc = 0x4fdaa4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4fdaa8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4fdaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4fdaac:
    // 0x4fdaac: 0x26350008  addiu       $s5, $s1, 0x8
    ctx->pc = 0x4fdaacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_4fdab0:
    // 0x4fdab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fdab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fdab4: 0x86a20002  lh          $v0, 0x2($s5)
    ctx->pc = 0x4fdab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x4fdab8: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FDAB8u;
    {
        const bool branch_taken_0x4fdab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fdab8) {
            ctx->pc = 0x4FDABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FDAB8u;
            // 0x4fdabc: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FDAD0u;
            goto label_4fdad0;
        }
    }
    ctx->pc = 0x4FDAC0u;
    // 0x4fdac0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4fdac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fdac4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FDAC4u;
    {
        const bool branch_taken_0x4fdac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FDAC4u;
        // 0x4fdac8: 0x5363c  dsll32      $a2, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fdac4) {
            ctx->pc = 0x4FDAD4u;
            goto label_4fdad4;
        }
    }
    ctx->pc = 0x4FDACCu;
    // 0x4fdacc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x4fdaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4fdad0:
    // 0x4fdad0: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x4fdad0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
label_4fdad4:
    // 0x4fdad4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4fdad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4fdad8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fdad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdadc: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FDADCu;
    SET_GPR_U32(ctx, 31, 0x4FDAE4u);
    ctx->pc = 0x4FDAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDADCu;
    // 0x4fdae0: 0x26300038  addiu       $s0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FDADCu, 0x4FDAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDAE4u;
label_4fdae4:
    // 0x4fdae4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fdae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fdae8: 0x8c46cec8  lw          $a2, -0x3138($v0)
    ctx->pc = 0x4fdae8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x56CEC8u));
    // 0x4fdaec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fdaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdaf0: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x4fdaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x4fdaf4: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x4fdaf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x4fdaf8: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4fdaf8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4fdafc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4fdafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4fdb00: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x4fdb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4fdb04: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x4fdb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x4fdb08: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4fdb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4fdb0c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4fdb0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4fdb10: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FDB10u;
    SET_GPR_U32(ctx, 31, 0x4FDB18u);
    ctx->pc = 0x4FDB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDB10u;
    // 0x4fdb14: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FDB10u, 0x4FDB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDB18u;
label_4fdb18:
    // 0x4fdb18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fdb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdb1c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4fdb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4fdb20: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4fdb20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4fdb24: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0x4fdb24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0x4fdb28: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FDB28u;
    SET_GPR_U32(ctx, 31, 0x4FDB30u);
    ctx->pc = 0x4FDB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDB28u;
    // 0x4fdb2c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FDB28u, 0x4FDB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDB30u;
label_4fdb30:
    // 0x4fdb30: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x4fdb30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x4fdb34: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x4fdb34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4fdb38: 0x131e38  dsll        $v1, $s3, 24
    ctx->pc = 0x4fdb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << 24);
    // 0x4fdb3c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x4fdb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x4fdb40: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x4fdb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x4fdb44: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x4fdb44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fdb48: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x4fdb48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x4fdb4c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x4fdb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x4fdb50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fdb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdb54: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fdb54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fdb58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4fdb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fdb5c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4fdb5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4fdb60: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FDB60u;
    SET_GPR_U32(ctx, 31, 0x4FDB68u);
    ctx->pc = 0x4FDB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDB60u;
    // 0x4fdb64: 0xe63025  or          $a2, $a3, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FDB60u, 0x4FDB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDB68u;
label_4fdb68:
    // 0x4fdb68: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4fdb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4fdb6c: 0xc13f634  jal         func_4FD8D0
    ctx->pc = 0x4FDB6Cu;
    SET_GPR_U32(ctx, 31, 0x4FDB74u);
    ctx->pc = 0x4FDB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDB6Cu;
    // 0x4fdb70: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FD8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FD8D0u, 0x4FDB6Cu, 0x4FDB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDB74u;
label_4fdb74:
    // 0x4fdb74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4fdb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fdb78: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x4fdb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4fdb7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4fdb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4fdb80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fdb80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4fdb84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4fdb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4fdb88: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fdb88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fdb8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fdb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdb90: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fdb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fdb94: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fdb94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fdb98: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x4fdb98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4fdb9c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FDB9Cu;
    SET_GPR_U32(ctx, 31, 0x4FDBA4u);
    ctx->pc = 0x4FDBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDB9Cu;
    // 0x4fdba0: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FDB9Cu, 0x4FDBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDBA4u;
label_4fdba4:
    // 0x4fdba4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x4fdba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4fdba8: 0xc13f634  jal         func_4FD8D0
    ctx->pc = 0x4FDBA8u;
    SET_GPR_U32(ctx, 31, 0x4FDBB0u);
    ctx->pc = 0x4FDBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDBA8u;
    // 0x4fdbac: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FD8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FD8D0u, 0x4FDBA8u, 0x4FDBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDBB0u;
label_4fdbb0:
    // 0x4fdbb0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x4fdbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4fdbb4: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x4fdbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4fdbb8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4fdbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4fdbbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fdbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4fdbc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4fdbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4fdbc4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fdbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fdbc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fdbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdbcc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fdbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fdbd0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fdbd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fdbd4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x4fdbd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4fdbd8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FDBD8u;
    SET_GPR_U32(ctx, 31, 0x4FDBE0u);
    ctx->pc = 0x4FDBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDBD8u;
    // 0x4fdbdc: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FDBD8u, 0x4FDBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDBE0u;
label_4fdbe0:
    // 0x4fdbe0: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x4fdbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4fdbe4: 0xc13f634  jal         func_4FD8D0
    ctx->pc = 0x4FDBE4u;
    SET_GPR_U32(ctx, 31, 0x4FDBECu);
    ctx->pc = 0x4FDBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDBE4u;
    // 0x4fdbe8: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FD8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FD8D0u, 0x4FDBE4u, 0x4FDBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDBECu;
label_4fdbec:
    // 0x4fdbec: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x4fdbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x4fdbf0: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x4fdbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x4fdbf4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4fdbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4fdbf8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fdbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4fdbfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4fdbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4fdc00: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fdc00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fdc04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fdc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fdc08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fdc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdc0c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fdc0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fdc10: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x4fdc10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4fdc14: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FDC14u;
    SET_GPR_U32(ctx, 31, 0x4FDC1Cu);
    ctx->pc = 0x4FDC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDC14u;
    // 0x4fdc18: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FDC14u, 0x4FDC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDC1Cu;
label_4fdc1c:
    // 0x4fdc1c: 0xc042d66  jal         func_10B598
    ctx->pc = 0x4FDC1Cu;
    SET_GPR_U32(ctx, 31, 0x4FDC24u);
    ctx->pc = 0x4FDC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDC1Cu;
    // 0x4fdc20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0x4FDC1Cu, 0x4FDC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDC24u;
label_4fdc24:
    // 0x4fdc24: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4fdc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4fdc28: 0xc13ea8a  jal         func_4FAA28
    ctx->pc = 0x4FDC28u;
    SET_GPR_U32(ctx, 31, 0x4FDC30u);
    ctx->pc = 0x4FDC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDC28u;
    // 0x4fdc2c: 0x962023  subu        $a0, $a0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FAA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FAA28u, 0x4FDC28u, 0x4FDC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDC30u;
label_4fdc30:
    // 0x4fdc30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4fdc30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fdc34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4fdc34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fdc38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4fdc38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fdc3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4fdc3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4fdc40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4fdc40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fdc44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4fdc44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4fdc48: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4fdc48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4fdc4c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4fdc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4fdc50: 0x3e00008  jr          $ra
    ctx->pc = 0x4FDC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FDC50u;
        // 0x4fdc54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FDC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FDC58u;
}
