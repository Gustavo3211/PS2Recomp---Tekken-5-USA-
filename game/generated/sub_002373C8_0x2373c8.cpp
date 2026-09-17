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

// Function: sub_002373C8
// Address: 0x2373c8 - 0x237438
void sub_002373C8_0x2373c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002373C8_0x2373c8");
#endif

    switch (ctx->pc) {
        case 0x237420u: goto label_237420;
        default: break;
    }

    ctx->pc = 0x2373c8u;

    // 0x2373c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2373c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2373cc: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2373ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2373d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2373d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2373d4: 0x84a30012  lh          $v1, 0x12($a1)
    ctx->pc = 0x2373d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x2373d8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2373d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2373dc: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x2373dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x2373e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2373e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2373e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2373e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2373e8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x2373e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2373ec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2373ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2373f0: 0x84c30012  lh          $v1, 0x12($a2)
    ctx->pc = 0x2373f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x2373f4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2373f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2373f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2373f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2373fc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2373fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237400: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x237400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x237404: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x237404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x237408: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x237408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x23740c: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x23740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x237410: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x237410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x237414: 0x46016b41  sub.s       $f13, $f13, $f1
    ctx->pc = 0x237414u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x237418: 0xc0b7440  jal         func_2DD100
    ctx->pc = 0x237418u;
    SET_GPR_U32(ctx, 31, 0x237420u);
    ctx->pc = 0x23741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237418u;
    // 0x23741c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD100u, 0x237418u, 0x237420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237420u;
label_237420:
    // 0x237420: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x237420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x237424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x237424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237428: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x237428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23742c: 0x3e00008  jr          $ra
    ctx->pc = 0x23742Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23742Cu;
        // 0x237430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23742Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237434u;
    // 0x237434: 0x0  nop
    ctx->pc = 0x237434u;
    // NOP
    ctx->pc = 0x237438u;
}
