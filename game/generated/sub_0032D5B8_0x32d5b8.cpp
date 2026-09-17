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

// Function: sub_0032D5B8
// Address: 0x32d5b8 - 0x32d5f0
void sub_0032D5B8_0x32d5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D5B8_0x32d5b8");
#endif

    switch (ctx->pc) {
        case 0x32d5d8u: goto label_32d5d8;
        default: break;
    }

    ctx->pc = 0x32d5b8u;

    // 0x32d5b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32d5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d5bc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d5c4: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d5c8: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x32d5c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x32d5cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d5d0: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D5D0u;
    SET_GPR_U32(ctx, 31, 0x32D5D8u);
    ctx->pc = 0x32D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D5D0u;
    // 0x32d5d4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D5D0u, 0x32D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D5D8u;
label_32d5d8:
    // 0x32d5d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32D5D8u;
    {
        const bool branch_taken_0x32d5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d5d8) {
            ctx->pc = 0x32D5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D5D8u;
            // 0x32d5dc: 0xe45400ec  swc1        $f20, 0xEC($v0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D5E0u;
            goto label_32d5e0;
        }
    }
    ctx->pc = 0x32D5E0u;
label_32d5e0:
    // 0x32d5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d5e4: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x32d5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32d5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x32D5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5E8u;
        // 0x32d5ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D5F0u;
}
