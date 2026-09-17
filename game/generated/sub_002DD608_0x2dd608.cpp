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

// Function: sub_002DD608
// Address: 0x2dd608 - 0x2dd728
void sub_002DD608_0x2dd608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD608_0x2dd608");
#endif

    switch (ctx->pc) {
        case 0x2dd634u: goto label_2dd634;
        case 0x2dd648u: goto label_2dd648;
        case 0x2dd670u: goto label_2dd670;
        case 0x2dd67cu: goto label_2dd67c;
        case 0x2dd68cu: goto label_2dd68c;
        case 0x2dd694u: goto label_2dd694;
        case 0x2dd69cu: goto label_2dd69c;
        case 0x2dd6a8u: goto label_2dd6a8;
        case 0x2dd6b4u: goto label_2dd6b4;
        case 0x2dd6c4u: goto label_2dd6c4;
        case 0x2dd6d4u: goto label_2dd6d4;
        case 0x2dd6e4u: goto label_2dd6e4;
        case 0x2dd6f4u: goto label_2dd6f4;
        case 0x2dd704u: goto label_2dd704;
        case 0x2dd70cu: goto label_2dd70c;
        case 0x2dd714u: goto label_2dd714;
        default: break;
    }

    ctx->pc = 0x2dd608u;

    // 0x2dd608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dd608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dd60c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2dd60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x2dd610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dd614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd618: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dd618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dd61c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2dd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2dd620: 0x8c6237cc  lw          $v0, 0x37CC($v1)
    ctx->pc = 0x2dd620u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E37CCu));
    // 0x2dd624: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD624u;
    {
        const bool branch_taken_0x2dd624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd624) {
            ctx->pc = 0x2DD640u;
            goto label_2dd640;
        }
    }
    ctx->pc = 0x2DD62Cu;
    // 0x2dd62c: 0xc0b7608  jal         func_2DD820
    ctx->pc = 0x2DD62Cu;
    SET_GPR_U32(ctx, 31, 0x2DD634u);
    ctx->pc = 0x2DD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD62Cu;
    // 0x2dd630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD820u, 0x2DD62Cu, 0x2DD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD634u;
label_2dd634:
    // 0x2dd634: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD634u;
    {
        const bool branch_taken_0x2dd634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD634u;
        // 0x2dd638: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd634) {
            ctx->pc = 0x2DD64Cu;
            goto label_2dd64c;
        }
    }
    ctx->pc = 0x2DD63Cu;
    // 0x2dd63c: 0x0  nop
    ctx->pc = 0x2dd63cu;
    // NOP
label_2dd640:
    // 0x2dd640: 0xc0b7610  jal         func_2DD840
    ctx->pc = 0x2DD640u;
    SET_GPR_U32(ctx, 31, 0x2DD648u);
    ctx->pc = 0x2DD644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD640u;
    // 0x2dd644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD840u, 0x2DD640u, 0x2DD648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD648u;
label_2dd648:
    // 0x2dd648: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2dd648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dd64c:
    // 0x2dd64c: 0x8e070064  lw          $a3, 0x64($s0)
    ctx->pc = 0x2dd64cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2dd650: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x2dd650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x2dd654: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dd654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd658: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x2dd658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2dd65c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2dd65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2dd660: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2dd660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2dd664: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x2dd664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd668: 0xc0c67b0  jal         func_319EC0
    ctx->pc = 0x2DD668u;
    SET_GPR_U32(ctx, 31, 0x2DD670u);
    ctx->pc = 0x2DD66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD668u;
    // 0x2dd66c: 0xa2000069  sb          $zero, 0x69($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319EC0u, 0x2DD668u, 0x2DD670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD670u;
label_2dd670:
    // 0x2dd670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd674: 0xc0b780a  jal         func_2DE028
    ctx->pc = 0x2DD674u;
    SET_GPR_U32(ctx, 31, 0x2DD67Cu);
    ctx->pc = 0x2DD678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD674u;
    // 0x2dd678: 0x8e05006c  lw          $a1, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE028u, 0x2DD674u, 0x2DD67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD67Cu;
label_2dd67c:
    // 0x2dd67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd680: 0x82060069  lb          $a2, 0x69($s0)
    ctx->pc = 0x2dd680u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x2dd684: 0xc0b7830  jal         func_2DE0C0
    ctx->pc = 0x2DD684u;
    SET_GPR_U32(ctx, 31, 0x2DD68Cu);
    ctx->pc = 0x2DD688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD684u;
    // 0x2dd688: 0x82050068  lb          $a1, 0x68($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE0C0u, 0x2DD684u, 0x2DD68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD68Cu;
label_2dd68c:
    // 0x2dd68c: 0xc0b7652  jal         func_2DD948
    ctx->pc = 0x2DD68Cu;
    SET_GPR_U32(ctx, 31, 0x2DD694u);
    ctx->pc = 0x2DD690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD68Cu;
    // 0x2dd690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD948u, 0x2DD68Cu, 0x2DD694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD694u;
label_2dd694:
    // 0x2dd694: 0xc0c6826  jal         func_31A098
    ctx->pc = 0x2DD694u;
    SET_GPR_U32(ctx, 31, 0x2DD69Cu);
    ctx->pc = 0x2DD698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD694u;
    // 0x2dd698: 0x3c040010  lui         $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A098u, 0x2DD694u, 0x2DD69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD69Cu;
label_2dd69c:
    // 0x2dd69c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2dd69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dd6a0: 0xc0c8d7c  jal         func_3235F0
    ctx->pc = 0x2DD6A0u;
    SET_GPR_U32(ctx, 31, 0x2DD6A8u);
    ctx->pc = 0x2DD6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD6A0u;
    // 0x2dd6a4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235F0u, 0x2DD6A0u, 0x2DD6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6A8u;
label_2dd6a8:
    // 0x2dd6a8: 0x3c04100c  lui         $a0, 0x100C
    ctx->pc = 0x2dd6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4108 << 16));
    // 0x2dd6ac: 0xc0c825a  jal         func_320968
    ctx->pc = 0x2DD6ACu;
    SET_GPR_U32(ctx, 31, 0x2DD6B4u);
    ctx->pc = 0x2DD6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD6ACu;
    // 0x2dd6b0: 0x24050600  addiu       $a1, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320968u, 0x2DD6ACu, 0x2DD6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6B4u;
label_2dd6b4:
    // 0x2dd6b4: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x2dd6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x2dd6b8: 0x24848b90  addiu       $a0, $a0, -0x7470
    ctx->pc = 0x2dd6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937488));
    // 0x2dd6bc: 0xc0cb7c8  jal         func_32DF20
    ctx->pc = 0x2DD6BCu;
    SET_GPR_U32(ctx, 31, 0x2DD6C4u);
    ctx->pc = 0x2DD6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD6BCu;
    // 0x2dd6c0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF20u, 0x2DD6BCu, 0x2DD6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6C4u;
label_2dd6c4:
    // 0x2dd6c4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd6c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6cc: 0xc0cc012  jal         func_330048
    ctx->pc = 0x2DD6CCu;
    SET_GPR_U32(ctx, 31, 0x2DD6D4u);
    ctx->pc = 0x2DD6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD6CCu;
    // 0x2dd6d0: 0x2484da88  addiu       $a0, $a0, -0x2578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330048u, 0x2DD6CCu, 0x2DD6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6D4u;
label_2dd6d4:
    // 0x2dd6d4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd6d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6dc: 0xc0cc01e  jal         func_330078
    ctx->pc = 0x2DD6DCu;
    SET_GPR_U32(ctx, 31, 0x2DD6E4u);
    ctx->pc = 0x2DD6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD6DCu;
    // 0x2dd6e0: 0x2484dad0  addiu       $a0, $a0, -0x2530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330078u, 0x2DD6DCu, 0x2DD6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6E4u;
label_2dd6e4:
    // 0x2dd6e4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd6e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6ec: 0xc0cc02a  jal         func_3300A8
    ctx->pc = 0x2DD6ECu;
    SET_GPR_U32(ctx, 31, 0x2DD6F4u);
    ctx->pc = 0x2DD6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD6ECu;
    // 0x2dd6f0: 0x2484dad8  addiu       $a0, $a0, -0x2528 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3300A8u, 0x2DD6ECu, 0x2DD6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6F4u;
label_2dd6f4:
    // 0x2dd6f4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd6f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd6fc: 0xc0c6880  jal         func_31A200
    ctx->pc = 0x2DD6FCu;
    SET_GPR_U32(ctx, 31, 0x2DD704u);
    ctx->pc = 0x2DD700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD6FCu;
    // 0x2dd700: 0x2484dae0  addiu       $a0, $a0, -0x2520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A200u, 0x2DD6FCu, 0x2DD704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD704u;
label_2dd704:
    // 0x2dd704: 0xc0b77ae  jal         func_2DDEB8
    ctx->pc = 0x2DD704u;
    SET_GPR_U32(ctx, 31, 0x2DD70Cu);
    ctx->pc = 0x2DD708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD704u;
    // 0x2dd708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDEB8u, 0x2DD704u, 0x2DD70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD70Cu;
label_2dd70c:
    // 0x2dd70c: 0xc0cc508  jal         func_331420
    ctx->pc = 0x2DD70Cu;
    SET_GPR_U32(ctx, 31, 0x2DD714u);
    ctx->pc = 0x331420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331420u, 0x2DD70Cu, 0x2DD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD714u;
label_2dd714:
    // 0x2dd714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dd714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dd718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd71c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD71Cu;
        // 0x2dd720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD724u;
    // 0x2dd724: 0x0  nop
    ctx->pc = 0x2dd724u;
    // NOP
    ctx->pc = 0x2dd728u;
}
