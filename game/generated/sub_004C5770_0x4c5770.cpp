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

// Function: sub_004C5770
// Address: 0x4c5770 - 0x4c57c8
void sub_004C5770_0x4c5770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5770_0x4c5770");
#endif

    switch (ctx->pc) {
        case 0x4c5770u: goto label_4c5770;
        case 0x4c5774u: goto label_4c5774;
        case 0x4c5778u: goto label_4c5778;
        case 0x4c577cu: goto label_4c577c;
        case 0x4c5780u: goto label_4c5780;
        case 0x4c5784u: goto label_4c5784;
        case 0x4c5788u: goto label_4c5788;
        case 0x4c578cu: goto label_4c578c;
        case 0x4c5790u: goto label_4c5790;
        case 0x4c5794u: goto label_4c5794;
        case 0x4c5798u: goto label_4c5798;
        case 0x4c579cu: goto label_4c579c;
        case 0x4c57a0u: goto label_4c57a0;
        case 0x4c57a4u: goto label_4c57a4;
        case 0x4c57a8u: goto label_4c57a8;
        case 0x4c57acu: goto label_4c57ac;
        case 0x4c57b0u: goto label_4c57b0;
        case 0x4c57b4u: goto label_4c57b4;
        case 0x4c57b8u: goto label_4c57b8;
        case 0x4c57bcu: goto label_4c57bc;
        case 0x4c57c0u: goto label_4c57c0;
        case 0x4c57c4u: goto label_4c57c4;
        default: break;
    }

    ctx->pc = 0x4c5770u;

label_4c5770:
    // 0x4c5770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c5770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4c5774:
    // 0x4c5774: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c5774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4c5778:
    // 0x4c5778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c5778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4c577c:
    // 0x4c577c: 0x24a50ee0  addiu       $a1, $a1, 0xEE0
    ctx->pc = 0x4c577cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3808));
label_4c5780:
    // 0x4c5780: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4c5780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c5784:
    // 0x4c5784: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c5784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4c5788:
    // 0x4c5788: 0x84c4016a  lh          $a0, 0x16A($a2)
    ctx->pc = 0x4c5788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 362)));
label_4c578c:
    // 0x4c578c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c5790:
    // 0x4c5790: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4c5790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4c5794:
    // 0x4c5794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c5794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4c5798:
    // 0x4c5798: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c5798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4c579c:
    // 0x4c579c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c579cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4c57a0:
    // 0x4c57a0: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4c57a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c57a4:
    // 0x4c57a4: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x4c57a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_4c57a8:
    // 0x4c57a8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_4c57ac:
    if (ctx->pc == 0x4C57ACu) {
        ctx->pc = 0x4C57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C57A8u;
        // 0x4c57ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C57B0u;
        goto label_4c57b0;
    }
    ctx->pc = 0x4C57A8u;
    {
        const bool branch_taken_0x4c57a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c57a8) {
            ctx->pc = 0x4C57ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C57A8u;
            // 0x4c57ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C581Cu;
            return;
        }
    }
    ctx->pc = 0x4C57B0u;
label_4c57b0:
    // 0x4c57b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4c57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c57b4:
    // 0x4c57b4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c57b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4c57b8:
    // 0x4c57b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c57b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c57bc:
    // 0x4c57bc: 0x8c63b4f0  lw          $v1, -0x4B10($v1)
    ctx->pc = 0x4c57bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948080)));
label_4c57c0:
    // 0x4c57c0: 0x600008  jr          $v1
label_4c57c4:
    if (ctx->pc == 0x4C57C4u) {
        ctx->pc = 0x4C57C8u;
        goto label_fallthrough_0x4c57c0;
    }
    ctx->pc = 0x4C57C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C57C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4c57c0:
    ctx->pc = 0x4C57C8u;
}
