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

// Function: sub_00317ABC
// Address: 0x317abc - 0x317ba8
void sub_00317ABC_0x317abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317ABC_0x317abc");
#endif

    switch (ctx->pc) {
        case 0x317ae0u: goto label_317ae0;
        case 0x317afcu: goto label_317afc;
        case 0x317b0cu: goto label_317b0c;
        case 0x317b30u: goto label_317b30;
        case 0x317b4cu: goto label_317b4c;
        case 0x317b80u: goto label_317b80;
        case 0x317b90u: goto label_317b90;
        default: break;
    }

    ctx->pc = 0x317abcu;

    // 0x317abc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317ac0: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x317ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x317ac4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x317ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x317ac8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x317ac8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317acc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x317accu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x317ad0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x317ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317ad4: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x317ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x317ad8: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x317AD8u;
    SET_GPR_U32(ctx, 31, 0x317AE0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x317AD8u, 0x317AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317AE0u;
label_317ae0:
    // 0x317ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317ae4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317ae8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x317ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x317aec: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x317aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317af0: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x317af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x317af4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x317AF4u;
    SET_GPR_U32(ctx, 31, 0x317AFCu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x317AF4u, 0x317AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317AFCu;
label_317afc:
    // 0x317afc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317b00: 0x8c6443c0  lw          $a0, 0x43C0($v1)
    ctx->pc = 0x317b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17344)));
    // 0x317b04: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x317B04u;
    SET_GPR_U32(ctx, 31, 0x317B0Cu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x317B04u, 0x317B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B0Cu;
label_317b0c:
    // 0x317b0c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x317b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317b10: 0x8c4343c4  lw          $v1, 0x43C4($v0)
    ctx->pc = 0x317b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17348)));
    // 0x317b14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x317b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317b18: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317B18u;
    {
        const bool branch_taken_0x317b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x317b18) {
            ctx->pc = 0x317B3Cu;
            goto label_317b3c;
        }
    }
    ctx->pc = 0x317B20u;
    // 0x317b20: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317b24: 0x8c6443c4  lw          $a0, 0x43C4($v1)
    ctx->pc = 0x317b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17348)));
    // 0x317b28: 0xc0d6a1e  jal         func_35A878
    ctx->pc = 0x317B28u;
    SET_GPR_U32(ctx, 31, 0x317B30u);
    ctx->pc = 0x35A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A878u, 0x317B28u, 0x317B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B30u;
label_317b30:
    // 0x317b30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x317b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317b34: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317b38: 0xac6243c4  sw          $v0, 0x43C4($v1)
    ctx->pc = 0x317b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17348), GPR_U32(ctx, 2));
label_317b3c:
    // 0x317b3c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x317b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317b40: 0x8c4443c0  lw          $a0, 0x43C0($v0)
    ctx->pc = 0x317b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17344)));
    // 0x317b44: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x317B44u;
    SET_GPR_U32(ctx, 31, 0x317B4Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x317B44u, 0x317B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B4Cu;
label_317b4c:
    // 0x317b4c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317b50: 0x8c624198  lw          $v0, 0x4198($v1)
    ctx->pc = 0x317b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16792)));
    // 0x317b54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317B54u;
    {
        const bool branch_taken_0x317b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317b54) {
            ctx->pc = 0x317B64u;
            goto label_317b64;
        }
    }
    ctx->pc = 0x317B5Cu;
    // 0x317b5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x317B5Cu;
    {
        const bool branch_taken_0x317b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317b5c) {
            ctx->pc = 0x317B90u;
            goto label_317b90;
        }
    }
    ctx->pc = 0x317B64u;
label_317b64:
    // 0x317b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317b68: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317b6c: 0xac624198  sw          $v0, 0x4198($v1)
    ctx->pc = 0x317b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16792), GPR_U32(ctx, 2));
    // 0x317b70: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x317b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317b74: 0x8c44418c  lw          $a0, 0x418C($v0)
    ctx->pc = 0x317b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16780)));
    // 0x317b78: 0xc043cfc  jal         func_10F3F0
    ctx->pc = 0x317B78u;
    SET_GPR_U32(ctx, 31, 0x317B80u);
    ctx->pc = 0x10F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3F0u, 0x317B78u, 0x317B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B80u;
label_317b80:
    // 0x317b80: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x317b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317b84: 0x8c64418c  lw          $a0, 0x418C($v1)
    ctx->pc = 0x317b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16780)));
    // 0x317b88: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x317B88u;
    SET_GPR_U32(ctx, 31, 0x317B90u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x317B88u, 0x317B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B90u;
label_317b90:
    // 0x317b90: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x317b90u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b94: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x317b94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317b98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x317b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x317b9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x317b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x317BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317BA8u;
}
