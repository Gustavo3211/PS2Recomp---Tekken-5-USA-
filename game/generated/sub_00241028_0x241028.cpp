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

// Function: sub_00241028
// Address: 0x241028 - 0x241078
void sub_00241028_0x241028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241028_0x241028");
#endif

    switch (ctx->pc) {
        case 0x24103cu: goto label_24103c;
        default: break;
    }

    ctx->pc = 0x241028u;

    // 0x241028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24102c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x24102cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x241030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241034: 0xc0903fa  jal         func_240FE8
    ctx->pc = 0x241034u;
    SET_GPR_U32(ctx, 31, 0x24103Cu);
    ctx->pc = 0x241038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241034u;
    // 0x241038: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x240FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240FE8u, 0x241034u, 0x24103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24103Cu;
label_24103c:
    // 0x24103c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24103cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241040: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x241040u;
    {
        const bool branch_taken_0x241040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241040u;
        // 0x241044: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241040) {
            ctx->pc = 0x241068u;
            goto label_241068;
        }
    }
    ctx->pc = 0x241048u;
    // 0x241048: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x241048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24104c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24104Cu;
    {
        const bool branch_taken_0x24104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24104Cu;
        // 0x241050: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24104c) {
            ctx->pc = 0x24106Cu;
            goto label_24106c;
        }
    }
    ctx->pc = 0x241054u;
    // 0x241054: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x241054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241058: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x241058u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x24105c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x24105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241060: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x241060u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
    // 0x241064: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x241064u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_241068:
    // 0x241068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24106c:
    // 0x24106c: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x24106cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x241070: 0x3e00008  jr          $ra
    ctx->pc = 0x241070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241070u;
        // 0x241074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241078u;
}
