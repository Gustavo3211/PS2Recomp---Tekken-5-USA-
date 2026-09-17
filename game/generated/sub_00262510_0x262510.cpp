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

// Function: sub_00262510
// Address: 0x262510 - 0x262658
void sub_00262510_0x262510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262510_0x262510");
#endif

    switch (ctx->pc) {
        case 0x262538u: goto label_262538;
        case 0x262578u: goto label_262578;
        case 0x26258cu: goto label_26258c;
        case 0x2625a4u: goto label_2625a4;
        case 0x2625bcu: goto label_2625bc;
        case 0x2625d4u: goto label_2625d4;
        case 0x2625ecu: goto label_2625ec;
        case 0x262604u: goto label_262604;
        case 0x262630u: goto label_262630;
        default: break;
    }

    ctx->pc = 0x262510u;

    // 0x262510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26251c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26251cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x262520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262524: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x262524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x262528: 0x10e00046  beqz        $a3, . + 4 + (0x46 << 2)
    ctx->pc = 0x262528u;
    {
        const bool branch_taken_0x262528 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262528u;
        // 0x26252c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262528) {
            ctx->pc = 0x262644u;
            goto label_262644;
        }
    }
    ctx->pc = 0x262530u;
    // 0x262530: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x262530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x262534: 0x0  nop
    ctx->pc = 0x262534u;
    // NOP
label_262538:
    // 0x262538: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x262538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26253c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x262540: 0x94480006  lhu         $t0, 0x6($v0)
    ctx->pc = 0x262540u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x262544: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x262544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x262548: 0x2d030009  sltiu       $v1, $t0, 0x9
    ctx->pc = 0x262548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x26254c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x26254cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262550: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x262550u;
    {
        const bool branch_taken_0x262550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262550u;
        // 0x262554: 0x84460004  lh          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262550) {
            ctx->pc = 0x262634u;
            goto label_262634;
        }
    }
    ctx->pc = 0x262558u;
    // 0x262558: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x262558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x26255c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x26255cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x262560: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x262560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262564: 0x8c632780  lw          $v1, 0x2780($v1)
    ctx->pc = 0x262564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10112)));
    // 0x262568: 0x600008  jr          $v1
    ctx->pc = 0x262568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262570u: goto label_262570;
            case 0x262580u: goto label_262580;
            case 0x262598u: goto label_262598;
            case 0x2625B0u: goto label_2625b0;
            case 0x2625C8u: goto label_2625c8;
            case 0x2625E0u: goto label_2625e0;
            case 0x2625F8u: goto label_2625f8;
            case 0x262610u: goto label_262610;
            case 0x262620u: goto label_262620;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262568u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x262570u;
label_262570:
    // 0x262570: 0xc09291e  jal         func_24A478
    ctx->pc = 0x262570u;
    SET_GPR_U32(ctx, 31, 0x262578u);
    ctx->pc = 0x24A478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A478u, 0x262570u, 0x262578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262578u;
label_262578:
    // 0x262578: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x262578u;
    {
        const bool branch_taken_0x262578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262578u;
        // 0x26257c: 0x8e070044  lw          $a3, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262578) {
            ctx->pc = 0x262634u;
            goto label_262634;
        }
    }
    ctx->pc = 0x262580u;
label_262580:
    // 0x262580: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x262580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x262584: 0xc091dea  jal         func_2477A8
    ctx->pc = 0x262584u;
    SET_GPR_U32(ctx, 31, 0x26258Cu);
    ctx->pc = 0x262588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262584u;
    // 0x262588: 0x8c4488d0  lw          $a0, -0x7730($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477A8u, 0x262584u, 0x26258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26258Cu;
label_26258c:
    // 0x26258c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x26258Cu;
    {
        const bool branch_taken_0x26258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26258Cu;
        // 0x262590: 0x8e070044  lw          $a3, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26258c) {
            ctx->pc = 0x262634u;
            goto label_262634;
        }
    }
    ctx->pc = 0x262594u;
    // 0x262594: 0x0  nop
    ctx->pc = 0x262594u;
    // NOP
label_262598:
    // 0x262598: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x262598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x26259c: 0xc091dea  jal         func_2477A8
    ctx->pc = 0x26259Cu;
    SET_GPR_U32(ctx, 31, 0x2625A4u);
    ctx->pc = 0x2625A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26259Cu;
    // 0x2625a0: 0x8c4488d4  lw          $a0, -0x772C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477A8u, 0x26259Cu, 0x2625A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625A4u;
label_2625a4:
    // 0x2625a4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2625A4u;
    {
        const bool branch_taken_0x2625a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2625A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625A4u;
        // 0x2625a8: 0x8e070044  lw          $a3, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625a4) {
            ctx->pc = 0x262634u;
            goto label_262634;
        }
    }
    ctx->pc = 0x2625ACu;
    // 0x2625ac: 0x0  nop
    ctx->pc = 0x2625acu;
    // NOP
label_2625b0:
    // 0x2625b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2625b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2625b4: 0xc091df4  jal         func_2477D0
    ctx->pc = 0x2625B4u;
    SET_GPR_U32(ctx, 31, 0x2625BCu);
    ctx->pc = 0x2625B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625B4u;
    // 0x2625b8: 0x8c4488d0  lw          $a0, -0x7730($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477D0u, 0x2625B4u, 0x2625BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625BCu;
label_2625bc:
    // 0x2625bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2625BCu;
    {
        const bool branch_taken_0x2625bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2625C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625BCu;
        // 0x2625c0: 0x8e070044  lw          $a3, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625bc) {
            ctx->pc = 0x262634u;
            goto label_262634;
        }
    }
    ctx->pc = 0x2625C4u;
    // 0x2625c4: 0x0  nop
    ctx->pc = 0x2625c4u;
    // NOP
label_2625c8:
    // 0x2625c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2625c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2625cc: 0xc091df4  jal         func_2477D0
    ctx->pc = 0x2625CCu;
    SET_GPR_U32(ctx, 31, 0x2625D4u);
    ctx->pc = 0x2625D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625CCu;
    // 0x2625d0: 0x8c4488d4  lw          $a0, -0x772C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477D0u, 0x2625CCu, 0x2625D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625D4u;
label_2625d4:
    // 0x2625d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2625D4u;
    {
        const bool branch_taken_0x2625d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2625D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625D4u;
        // 0x2625d8: 0x8e070044  lw          $a3, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625d4) {
            ctx->pc = 0x262634u;
            goto label_262634;
        }
    }
    ctx->pc = 0x2625DCu;
    // 0x2625dc: 0x0  nop
    ctx->pc = 0x2625dcu;
    // NOP
label_2625e0:
    // 0x2625e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2625e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2625e4: 0xc091dfe  jal         func_2477F8
    ctx->pc = 0x2625E4u;
    SET_GPR_U32(ctx, 31, 0x2625ECu);
    ctx->pc = 0x2625E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625E4u;
    // 0x2625e8: 0x8c4488d0  lw          $a0, -0x7730($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477F8u, 0x2625E4u, 0x2625ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625ECu;
label_2625ec:
    // 0x2625ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2625ECu;
    {
        const bool branch_taken_0x2625ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2625F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625ECu;
        // 0x2625f0: 0x8e070044  lw          $a3, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625ec) {
            ctx->pc = 0x262634u;
            goto label_262634;
        }
    }
    ctx->pc = 0x2625F4u;
    // 0x2625f4: 0x0  nop
    ctx->pc = 0x2625f4u;
    // NOP
label_2625f8:
    // 0x2625f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2625f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2625fc: 0xc091dfe  jal         func_2477F8
    ctx->pc = 0x2625FCu;
    SET_GPR_U32(ctx, 31, 0x262604u);
    ctx->pc = 0x262600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625FCu;
    // 0x262600: 0x8c4488d4  lw          $a0, -0x772C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477F8u, 0x2625FCu, 0x262604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262604u;
label_262604:
    // 0x262604: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x262604u;
    {
        const bool branch_taken_0x262604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262604u;
        // 0x262608: 0x8e070044  lw          $a3, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262604) {
            ctx->pc = 0x262634u;
            goto label_262634;
        }
    }
    ctx->pc = 0x26260Cu;
    // 0x26260c: 0x0  nop
    ctx->pc = 0x26260cu;
    // NOP
label_262610:
    // 0x262610: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x262610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x262614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x262614u;
    {
        const bool branch_taken_0x262614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262614u;
        // 0x262618: 0x8c4488d0  lw          $a0, -0x7730($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262614) {
            ctx->pc = 0x262628u;
            goto label_262628;
        }
    }
    ctx->pc = 0x26261Cu;
    // 0x26261c: 0x0  nop
    ctx->pc = 0x26261cu;
    // NOP
label_262620:
    // 0x262620: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x262620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x262624: 0x8c4488d4  lw          $a0, -0x772C($v0)
    ctx->pc = 0x262624u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
label_262628:
    // 0x262628: 0xc091e10  jal         func_247840
    ctx->pc = 0x262628u;
    SET_GPR_U32(ctx, 31, 0x262630u);
    ctx->pc = 0x247840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247840u, 0x262628u, 0x262630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262630u;
label_262630:
    // 0x262630: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x262630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_262634:
    // 0x262634: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x262634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x262638: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x262638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x26263c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x26263Cu;
    {
        const bool branch_taken_0x26263c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26263Cu;
        // 0x262640: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26263c) {
            ctx->pc = 0x262538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262538;
        }
    }
    ctx->pc = 0x262644u;
label_262644:
    // 0x262644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262648: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x262648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26264c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26264cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262650: 0x3e00008  jr          $ra
    ctx->pc = 0x262650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262650u;
        // 0x262654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262658u;
}
