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

// Function: sub_00248780
// Address: 0x248780 - 0x2487c0
void sub_00248780_0x248780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248780_0x248780");
#endif

    switch (ctx->pc) {
        case 0x248780u: goto label_248780;
        case 0x248784u: goto label_248784;
        case 0x248788u: goto label_248788;
        case 0x24878cu: goto label_24878c;
        case 0x248790u: goto label_248790;
        case 0x248794u: goto label_248794;
        case 0x248798u: goto label_248798;
        case 0x24879cu: goto label_24879c;
        case 0x2487a0u: goto label_2487a0;
        case 0x2487a4u: goto label_2487a4;
        case 0x2487a8u: goto label_2487a8;
        case 0x2487acu: goto label_2487ac;
        case 0x2487b0u: goto label_2487b0;
        case 0x2487b4u: goto label_2487b4;
        case 0x2487b8u: goto label_2487b8;
        case 0x2487bcu: goto label_2487bc;
        default: break;
    }

    ctx->pc = 0x248780u;

label_248780:
    // 0x248780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_248784:
    // 0x248784: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x248784u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_248788:
    // 0x248788: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x248788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_24878c:
    // 0x24878c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x24878cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_248790:
    // 0x248790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_248794:
    // 0x248794: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x248794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_248798:
    // 0x248798: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x248798u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_24879c:
    // 0x24879c: 0xc4341300  lwc1        $f20, 0x1300($at)
    ctx->pc = 0x24879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2487a0:
    // 0x2487a0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_2487a4:
    if (ctx->pc == 0x2487A4u) {
        ctx->pc = 0x2487A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487A0u;
        // 0x2487a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2487A8u;
        goto label_2487a8;
    }
    ctx->pc = 0x2487A0u;
    {
        const bool branch_taken_0x2487a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2487a0) {
            ctx->pc = 0x2487A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2487A0u;
            // 0x2487a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248800u;
            return;
        }
    }
    ctx->pc = 0x2487A8u;
label_2487a8:
    // 0x2487a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2487a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2487ac:
    // 0x2487ac: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2487acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2487b0:
    // 0x2487b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2487b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2487b4:
    // 0x2487b4: 0x8c6312e0  lw          $v1, 0x12E0($v1)
    ctx->pc = 0x2487b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4832)));
label_2487b8:
    // 0x2487b8: 0x600008  jr          $v1
label_2487bc:
    if (ctx->pc == 0x2487BCu) {
        ctx->pc = 0x2487C0u;
        goto label_fallthrough_0x2487b8;
    }
    ctx->pc = 0x2487B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2487B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2487b8:
    ctx->pc = 0x2487C0u;
}
