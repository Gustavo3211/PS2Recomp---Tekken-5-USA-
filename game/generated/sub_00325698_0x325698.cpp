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

// Function: sub_00325698
// Address: 0x325698 - 0x325738
void sub_00325698_0x325698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325698_0x325698");
#endif

    ctx->pc = 0x325698u;

    // 0x325698: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x325698u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
    // 0x32569c: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x32569cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x3256a0: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x3256a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x3256a4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3256a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3256a8: 0x3c09003a  lui         $t1, 0x3A
    ctx->pc = 0x3256a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)58 << 16));
    // 0x3256ac: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x3256acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x3256b0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x3256b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x3256b4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3256b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3256b8: 0x254a3a80  addiu       $t2, $t2, 0x3A80
    ctx->pc = 0x3256b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 14976));
    // 0x3256bc: 0x24a54050  addiu       $a1, $a1, 0x4050
    ctx->pc = 0x3256bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16464));
    // 0x3256c0: 0x25293d20  addiu       $t1, $t1, 0x3D20
    ctx->pc = 0x3256c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15648));
    // 0x3256c4: 0x24c64310  addiu       $a2, $a2, 0x4310
    ctx->pc = 0x3256c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17168));
    // 0x3256c8: 0x25083d20  addiu       $t0, $t0, 0x3D20
    ctx->pc = 0x3256c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15648));
    // 0x3256cc: 0x24424310  addiu       $v0, $v0, 0x4310
    ctx->pc = 0x3256ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17168));
    // 0x3256d0: 0x24e74050  addiu       $a3, $a3, 0x4050
    ctx->pc = 0x3256d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16464));
    // 0x3256d4: 0x24634670  addiu       $v1, $v1, 0x4670
    ctx->pc = 0x3256d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18032));
    // 0x3256d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3256d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3256dc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3256dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3256e0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3256e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3256e4: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x3256e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3256e8: 0x10a4023  subu        $t0, $t0, $t2
    ctx->pc = 0x3256e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x3256ec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3256ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3256f0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x3256f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x3256f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3256f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3256f8: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x3256f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x3256fc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3256fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x325700: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x325700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x325704: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x325704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x325708: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x325708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x32570c: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x32570cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x325710: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x325710u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325714: 0xdfa60008  ld          $a2, 0x8($sp)
    ctx->pc = 0x325714u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325718: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x325718u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32571c: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x32571cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325720: 0xfc850040  sd          $a1, 0x40($a0)
    ctx->pc = 0x325720u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 5));
    // 0x325724: 0xfc830058  sd          $v1, 0x58($a0)
    ctx->pc = 0x325724u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 3));
    // 0x325728: 0xfc860048  sd          $a2, 0x48($a0)
    ctx->pc = 0x325728u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 6));
    // 0x32572c: 0xfc870050  sd          $a3, 0x50($a0)
    ctx->pc = 0x32572cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 7));
    // 0x325730: 0x3e00008  jr          $ra
    ctx->pc = 0x325730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325730u;
        // 0x325734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325738u;
}
