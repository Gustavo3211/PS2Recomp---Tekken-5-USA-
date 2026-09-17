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

// Function: sub_0029E7E0
// Address: 0x29e7e0 - 0x29e848
void sub_0029E7E0_0x29e7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E7E0_0x29e7e0");
#endif

    ctx->pc = 0x29e7e0u;

    // 0x29e7e0: 0x2ca20021  sltiu       $v0, $a1, 0x21
    ctx->pc = 0x29e7e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x29e7e4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x29e7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e7e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29E7E8u;
    {
        const bool branch_taken_0x29e7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7E8u;
        // 0x29e7ec: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7e8) {
            ctx->pc = 0x29E83Cu;
            goto label_29e83c;
        }
    }
    ctx->pc = 0x29E7F0u;
    // 0x29e7f0: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x29E7F0u;
    {
        const bool branch_taken_0x29e7f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7F0u;
        // 0x29e7f4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7f0) {
            ctx->pc = 0x29E83Cu;
            goto label_29e83c;
        }
    }
    ctx->pc = 0x29E7F8u;
    // 0x29e7f8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x29e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29e7fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29e800: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x29e800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29e804: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29e804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29e808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29e808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e80c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e810: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x29e810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x29e814: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29e814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29e818: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x29e818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x29e81c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x29e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x29e820: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x29e820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x29e824: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x29e824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x29e828: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x29e828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e82c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x29e82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x29e830: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x29e830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e834: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x29e834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x29e838: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x29e838u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_29e83c:
    // 0x29e83c: 0x3e00008  jr          $ra
    ctx->pc = 0x29E83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E844u;
    // 0x29e844: 0x0  nop
    ctx->pc = 0x29e844u;
    // NOP
    ctx->pc = 0x29e848u;
}
