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

// Function: sub_0032D4C8
// Address: 0x32d4c8 - 0x32d530
void sub_0032D4C8_0x32d4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D4C8_0x32d4c8");
#endif

    switch (ctx->pc) {
        case 0x32d4f8u: goto label_32d4f8;
        case 0x32d514u: goto label_32d514;
        default: break;
    }

    ctx->pc = 0x32d4c8u;

    // 0x32d4c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32d4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d4cc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32d4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32d4d4: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d4d8: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x32d4d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x32d4dc: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x32d4dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x32d4e0: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x32d4e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32d4e4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x32d4e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x32d4e8: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x32d4e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x32d4ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d4f0: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D4F0u;
    SET_GPR_U32(ctx, 31, 0x32D4F8u);
    ctx->pc = 0x32D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D4F0u;
    // 0x32d4f4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D4F0u, 0x32D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D4F8u;
label_32d4f8:
    // 0x32d4f8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x32d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x32d4fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32d4fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x32d500: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x32d500u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x32d504: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D504u;
    {
        const bool branch_taken_0x32d504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D504u;
        // 0x32d508: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d504) {
            ctx->pc = 0x32D514u;
            goto label_32d514;
        }
    }
    ctx->pc = 0x32D50Cu;
    // 0x32d50c: 0xc0cb02e  jal         func_32C0B8
    ctx->pc = 0x32D50Cu;
    SET_GPR_U32(ctx, 31, 0x32D514u);
    ctx->pc = 0x32C0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C0B8u, 0x32D50Cu, 0x32D514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D514u;
label_32d514:
    // 0x32d514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d518: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x32d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x32d51c: 0xc7b50010  lwc1        $f21, 0x10($sp)
    ctx->pc = 0x32d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x32d520: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x32d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32d524: 0x3e00008  jr          $ra
    ctx->pc = 0x32D524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D524u;
        // 0x32d528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D52Cu;
    // 0x32d52c: 0x0  nop
    ctx->pc = 0x32d52cu;
    // NOP
    ctx->pc = 0x32d530u;
}
