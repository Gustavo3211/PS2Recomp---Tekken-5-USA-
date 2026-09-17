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

// Function: sub_002381A0
// Address: 0x2381a0 - 0x238240
void sub_002381A0_0x2381a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002381A0_0x2381a0");
#endif

    ctx->pc = 0x2381a0u;

    // 0x2381a0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2381a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2381a4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2381a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2381a8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2381a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2381ac: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2381acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2381b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2381b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2381b4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2381b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2381b8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2381b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2381bc: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x2381bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2381c0: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2381c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2381c4: 0xc488000c  lwc1        $f8, 0xC($a0)
    ctx->pc = 0x2381c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2381c8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2381c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2381cc: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2381ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2381d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2381d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2381d4: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2381d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2381d8: 0x46034202  mul.s       $f8, $f8, $f3
    ctx->pc = 0x2381d8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2381dc: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x2381dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2381e0: 0xc48a0010  lwc1        $f10, 0x10($a0)
    ctx->pc = 0x2381e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2381e4: 0xc4890014  lwc1        $f9, 0x14($a0)
    ctx->pc = 0x2381e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2381e8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2381e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2381ec: 0xc4a40020  lwc1        $f4, 0x20($a1)
    ctx->pc = 0x2381ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2381f0: 0x46015282  mul.s       $f10, $f10, $f1
    ctx->pc = 0x2381f0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2381f4: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2381f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2381f8: 0x46024a42  mul.s       $f9, $f9, $f2
    ctx->pc = 0x2381f8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x2381fc: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x2381fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238200: 0xc4870018  lwc1        $f7, 0x18($a0)
    ctx->pc = 0x238200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x238204: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x238204u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x238208: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x238208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x23820c: 0xc485001c  lwc1        $f5, 0x1C($a0)
    ctx->pc = 0x23820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x238210: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x238210u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x238214: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x238214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238218: 0xc4a6001c  lwc1        $f6, 0x1C($a1)
    ctx->pc = 0x238218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x23821c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x23821cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x238220: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x238220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x238224: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x238224u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x238228: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x238228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x23822c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x23822cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x238230: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x238230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x238234: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x238234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x238238: 0x3e00008  jr          $ra
    ctx->pc = 0x238238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238238u;
        // 0x23823c: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238240u;
}
