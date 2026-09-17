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

// Function: sub_00488590
// Address: 0x488590 - 0x488728
void sub_00488590_0x488590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488590_0x488590");
#endif

    switch (ctx->pc) {
        case 0x4885c0u: goto label_4885c0;
        case 0x4885d0u: goto label_4885d0;
        case 0x488600u: goto label_488600;
        case 0x488628u: goto label_488628;
        case 0x488630u: goto label_488630;
        case 0x488644u: goto label_488644;
        case 0x488650u: goto label_488650;
        case 0x48868cu: goto label_48868c;
        case 0x488694u: goto label_488694;
        case 0x4886a0u: goto label_4886a0;
        case 0x4886acu: goto label_4886ac;
        case 0x4886d8u: goto label_4886d8;
        case 0x4886e0u: goto label_4886e0;
        case 0x4886ecu: goto label_4886ec;
        case 0x4886f8u: goto label_4886f8;
        case 0x488700u: goto label_488700;
        default: break;
    }

    ctx->pc = 0x488590u;

    // 0x488590: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x488590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x488594: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x488594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x488598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x488598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48859c: 0x3c04000b  lui         $a0, 0xB
    ctx->pc = 0x48859cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)11 << 16));
    // 0x4885a0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x4885a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x4885a4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x4885a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x4885a8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x4885a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x4885ac: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x4885acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x4885b0: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x4885b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x4885b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4885b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4885b8: 0xc145144  jal         func_514510
    ctx->pc = 0x4885B8u;
    SET_GPR_U32(ctx, 31, 0x4885C0u);
    ctx->pc = 0x4885BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4885B8u;
    // 0x4885bc: 0x34842080  ori         $a0, $a0, 0x2080 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8320);
    ctx->in_delay_slot = false;
    ctx->pc = 0x514510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514510u, 0x4885B8u, 0x4885C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4885C0u;
label_4885c0:
    // 0x4885c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4885c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4885c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4885c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4885c8: 0xc122134  jal         func_4884D0
    ctx->pc = 0x4885C8u;
    SET_GPR_U32(ctx, 31, 0x4885D0u);
    ctx->pc = 0x4885CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4885C8u;
    // 0x4885cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4884D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4884D0u, 0x4885C8u, 0x4885D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4885D0u;
label_4885d0:
    // 0x4885d0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x4885d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4885d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4885d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4885d8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x4885d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4885dc: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x4885dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x4885e0: 0x2695000c  addiu       $s5, $s4, 0xC
    ctx->pc = 0x4885e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x4885e4: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x4885e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x4885e8: 0x29203  sra         $s2, $v0, 8
    ctx->pc = 0x4885e8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4885ec: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x4885ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4885f0: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x4885f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x4885f4: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x4885F4u;
    {
        const bool branch_taken_0x4885f4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x4885F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4885F4u;
        // 0x4885f8: 0x439023  subu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4885f4) {
            ctx->pc = 0x48865Cu;
            goto label_48865c;
        }
    }
    ctx->pc = 0x4885FCu;
    // 0x4885fc: 0x114e00  sll         $t1, $s1, 24
    ctx->pc = 0x4885fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
label_488600:
    // 0x488600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x488600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x488604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x488604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488608: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x488608u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x48860c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x48860cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x488610: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x488610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x488614: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x488614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488618: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x488618u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x48861c: 0x240b0100  addiu       $t3, $zero, 0x100
    ctx->pc = 0x48861cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x488620: 0xc040a78  jal         func_1029E0
    ctx->pc = 0x488620u;
    SET_GPR_U32(ctx, 31, 0x488628u);
    ctx->pc = 0x488624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488620u;
    // 0x488624: 0x24053000  addiu       $a1, $zero, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E0u, 0x488620u, 0x488628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488628u;
label_488628:
    // 0x488628: 0xc043d88  jal         func_10F620
    ctx->pc = 0x488628u;
    SET_GPR_U32(ctx, 31, 0x488630u);
    ctx->pc = 0x48862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488628u;
    // 0x48862c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x488628u, 0x488630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488630u;
label_488630:
    // 0x488630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x488630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488634: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x488634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x488638: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x488638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x48863c: 0xc040af2  jal         func_102BC8
    ctx->pc = 0x48863Cu;
    SET_GPR_U32(ctx, 31, 0x488644u);
    ctx->pc = 0x488640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48863Cu;
    // 0x488640: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102BC8u, 0x48863Cu, 0x488644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488644u;
label_488644:
    // 0x488644: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x488644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488648: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0x488648u;
    SET_GPR_U32(ctx, 31, 0x488650u);
    ctx->pc = 0x48864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488648u;
    // 0x48864c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0x488648u, 0x488650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488650u;
label_488650:
    // 0x488650: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x488650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x488654: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x488654u;
    {
        const bool branch_taken_0x488654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x488658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488654u;
        // 0x488658: 0x114e00  sll         $t1, $s1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488654) {
            ctx->pc = 0x488600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488600;
        }
    }
    ctx->pc = 0x48865Cu;
label_48865c:
    // 0x48865c: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x48865Cu;
    {
        const bool branch_taken_0x48865c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x488660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48865Cu;
        // 0x488660: 0x114e00  sll         $t1, $s1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48865c) {
            ctx->pc = 0x4886ACu;
            goto label_4886ac;
        }
    }
    ctx->pc = 0x488664u;
    // 0x488664: 0x125c00  sll         $t3, $s2, 16
    ctx->pc = 0x488664u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x488668: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x488668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48866c: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x48866cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x488670: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x488670u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x488674: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x488674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x488678: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x488678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x48867c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x48867cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488680: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x488680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x488684: 0xc040a78  jal         func_1029E0
    ctx->pc = 0x488684u;
    SET_GPR_U32(ctx, 31, 0x48868Cu);
    ctx->pc = 0x488688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488684u;
    // 0x488688: 0x24053000  addiu       $a1, $zero, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E0u, 0x488684u, 0x48868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48868Cu;
label_48868c:
    // 0x48868c: 0xc043d88  jal         func_10F620
    ctx->pc = 0x48868Cu;
    SET_GPR_U32(ctx, 31, 0x488694u);
    ctx->pc = 0x488690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48868Cu;
    // 0x488690: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x48868Cu, 0x488694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488694u;
label_488694:
    // 0x488694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x488694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488698: 0xc040af2  jal         func_102BC8
    ctx->pc = 0x488698u;
    SET_GPR_U32(ctx, 31, 0x4886A0u);
    ctx->pc = 0x48869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488698u;
    // 0x48869c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102BC8u, 0x488698u, 0x4886A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4886A0u;
label_4886a0:
    // 0x4886a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4886a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4886a4: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0x4886A4u;
    SET_GPR_U32(ctx, 31, 0x4886ACu);
    ctx->pc = 0x4886A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4886A4u;
    // 0x4886a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0x4886A4u, 0x4886ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4886ACu;
label_4886ac:
    // 0x4886ac: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4886acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4886b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4886b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4886b4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4886b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4886b8: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x4886b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x4886bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4886bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4886c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4886c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4886c4: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x4886c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4886c8: 0x240b0090  addiu       $t3, $zero, 0x90
    ctx->pc = 0x4886c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x4886cc: 0x24052c80  addiu       $a1, $zero, 0x2C80
    ctx->pc = 0x4886ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11392));
    // 0x4886d0: 0xc040a78  jal         func_1029E0
    ctx->pc = 0x4886D0u;
    SET_GPR_U32(ctx, 31, 0x4886D8u);
    ctx->pc = 0x4886D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4886D0u;
    // 0x4886d4: 0x2828021  addu        $s0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E0u, 0x4886D0u, 0x4886D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4886D8u;
label_4886d8:
    // 0x4886d8: 0xc043d88  jal         func_10F620
    ctx->pc = 0x4886D8u;
    SET_GPR_U32(ctx, 31, 0x4886E0u);
    ctx->pc = 0x4886DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4886D8u;
    // 0x4886dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x4886D8u, 0x4886E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4886E0u;
label_4886e0:
    // 0x4886e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4886e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4886e4: 0xc040af2  jal         func_102BC8
    ctx->pc = 0x4886E4u;
    SET_GPR_U32(ctx, 31, 0x4886ECu);
    ctx->pc = 0x4886E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4886E4u;
    // 0x4886e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102BC8u, 0x4886E4u, 0x4886ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4886ECu;
label_4886ec:
    // 0x4886ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4886ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4886f0: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0x4886F0u;
    SET_GPR_U32(ctx, 31, 0x4886F8u);
    ctx->pc = 0x4886F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4886F0u;
    // 0x4886f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0x4886F0u, 0x4886F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4886F8u;
label_4886f8:
    // 0x4886f8: 0xc14518c  jal         func_514630
    ctx->pc = 0x4886F8u;
    SET_GPR_U32(ctx, 31, 0x488700u);
    ctx->pc = 0x4886FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4886F8u;
    // 0x4886fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514630u, 0x4886F8u, 0x488700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488700u;
label_488700:
    // 0x488700: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x488700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x488704: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x488704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x488708: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x488708u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48870c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x48870cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x488710: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x488710u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x488714: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x488714u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x488718: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x488718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48871c: 0x3e00008  jr          $ra
    ctx->pc = 0x48871Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48871Cu;
        // 0x488720: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48871Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488724u;
    // 0x488724: 0x0  nop
    ctx->pc = 0x488724u;
    // NOP
    ctx->pc = 0x488728u;
}
