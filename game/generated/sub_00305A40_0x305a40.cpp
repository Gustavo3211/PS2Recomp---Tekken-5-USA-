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

// Function: sub_00305A40
// Address: 0x305a40 - 0x305af8
void sub_00305A40_0x305a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305A40_0x305a40");
#endif

    switch (ctx->pc) {
        case 0x305a80u: goto label_305a80;
        case 0x305a90u: goto label_305a90;
        case 0x305aa0u: goto label_305aa0;
        case 0x305ab0u: goto label_305ab0;
        case 0x305ac0u: goto label_305ac0;
        case 0x305ad0u: goto label_305ad0;
        case 0x305ad8u: goto label_305ad8;
        case 0x305ae0u: goto label_305ae0;
        default: break;
    }

    ctx->pc = 0x305a40u;

    // 0x305a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x305a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305a48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x305a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x305a50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x305a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x305a54: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x305a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x305a58: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x305A58u;
    {
        const bool branch_taken_0x305a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A58u;
        // 0x305a5c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a58) {
            ctx->pc = 0x305AD0u;
            goto label_305ad0;
        }
    }
    ctx->pc = 0x305A60u;
    // 0x305a60: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x305a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x305a64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x305a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x305a68: 0x8c632500  lw          $v1, 0x2500($v1)
    ctx->pc = 0x305a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9472)));
    // 0x305a6c: 0x600008  jr          $v1
    ctx->pc = 0x305A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x305A78u: goto label_305a78;
            case 0x305A88u: goto label_305a88;
            case 0x305A98u: goto label_305a98;
            case 0x305AA8u: goto label_305aa8;
            case 0x305AB8u: goto label_305ab8;
            case 0x305AC8u: goto label_305ac8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305A6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x305A74u;
    // 0x305a74: 0x0  nop
    ctx->pc = 0x305a74u;
    // NOP
label_305a78:
    // 0x305a78: 0xc0c16da  jal         func_305B68
    ctx->pc = 0x305A78u;
    SET_GPR_U32(ctx, 31, 0x305A80u);
    ctx->pc = 0x305A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A78u;
    // 0x305a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305B68u, 0x305A78u, 0x305A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A80u;
label_305a80:
    // 0x305a80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x305A80u;
    {
        const bool branch_taken_0x305a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a80) {
            ctx->pc = 0x305AD0u;
            goto label_305ad0;
        }
    }
    ctx->pc = 0x305A88u;
label_305a88:
    // 0x305a88: 0xc0c16e6  jal         func_305B98
    ctx->pc = 0x305A88u;
    SET_GPR_U32(ctx, 31, 0x305A90u);
    ctx->pc = 0x305A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A88u;
    // 0x305a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305B98u, 0x305A88u, 0x305A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A90u;
label_305a90:
    // 0x305a90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x305A90u;
    {
        const bool branch_taken_0x305a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a90) {
            ctx->pc = 0x305AD0u;
            goto label_305ad0;
        }
    }
    ctx->pc = 0x305A98u;
label_305a98:
    // 0x305a98: 0xc0c1892  jal         func_306248
    ctx->pc = 0x305A98u;
    SET_GPR_U32(ctx, 31, 0x305AA0u);
    ctx->pc = 0x305A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A98u;
    // 0x305a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306248u, 0x305A98u, 0x305AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AA0u;
label_305aa0:
    // 0x305aa0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x305AA0u;
    {
        const bool branch_taken_0x305aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305aa0) {
            ctx->pc = 0x305AD0u;
            goto label_305ad0;
        }
    }
    ctx->pc = 0x305AA8u;
label_305aa8:
    // 0x305aa8: 0xc0c18a4  jal         func_306290
    ctx->pc = 0x305AA8u;
    SET_GPR_U32(ctx, 31, 0x305AB0u);
    ctx->pc = 0x305AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AA8u;
    // 0x305aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306290u, 0x305AA8u, 0x305AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AB0u;
label_305ab0:
    // 0x305ab0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x305AB0u;
    {
        const bool branch_taken_0x305ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305ab0) {
            ctx->pc = 0x305AD0u;
            goto label_305ad0;
        }
    }
    ctx->pc = 0x305AB8u;
label_305ab8:
    // 0x305ab8: 0xc0c18de  jal         func_306378
    ctx->pc = 0x305AB8u;
    SET_GPR_U32(ctx, 31, 0x305AC0u);
    ctx->pc = 0x305ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AB8u;
    // 0x305abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306378u, 0x305AB8u, 0x305AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AC0u;
label_305ac0:
    // 0x305ac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305AC0u;
    {
        const bool branch_taken_0x305ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305ac0) {
            ctx->pc = 0x305AD0u;
            goto label_305ad0;
        }
    }
    ctx->pc = 0x305AC8u;
label_305ac8:
    // 0x305ac8: 0xc0c18fa  jal         func_3063E8
    ctx->pc = 0x305AC8u;
    SET_GPR_U32(ctx, 31, 0x305AD0u);
    ctx->pc = 0x305ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AC8u;
    // 0x305acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3063E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3063E8u, 0x305AC8u, 0x305AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AD0u;
label_305ad0:
    // 0x305ad0: 0xc0c18fc  jal         func_3063F0
    ctx->pc = 0x305AD0u;
    SET_GPR_U32(ctx, 31, 0x305AD8u);
    ctx->pc = 0x305AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AD0u;
    // 0x305ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3063F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3063F0u, 0x305AD0u, 0x305AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AD8u;
label_305ad8:
    // 0x305ad8: 0xc0c1b4e  jal         func_306D38
    ctx->pc = 0x305AD8u;
    SET_GPR_U32(ctx, 31, 0x305AE0u);
    ctx->pc = 0x305ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AD8u;
    // 0x305adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306D38u, 0x305AD8u, 0x305AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AE0u;
label_305ae0:
    // 0x305ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x305ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305ae8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x305ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305aec: 0x3e00008  jr          $ra
    ctx->pc = 0x305AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AECu;
        // 0x305af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305AF4u;
    // 0x305af4: 0x0  nop
    ctx->pc = 0x305af4u;
    // NOP
    ctx->pc = 0x305af8u;
}
