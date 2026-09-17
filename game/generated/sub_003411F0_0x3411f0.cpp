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

// Function: sub_003411F0
// Address: 0x3411f0 - 0x341228
void sub_003411F0_0x3411f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003411F0_0x3411f0");
#endif

    switch (ctx->pc) {
        case 0x3411f0u: goto label_3411f0;
        case 0x3411f4u: goto label_3411f4;
        case 0x3411f8u: goto label_3411f8;
        case 0x3411fcu: goto label_3411fc;
        case 0x341200u: goto label_341200;
        case 0x341204u: goto label_341204;
        case 0x341208u: goto label_341208;
        case 0x34120cu: goto label_34120c;
        case 0x341210u: goto label_341210;
        case 0x341214u: goto label_341214;
        case 0x341218u: goto label_341218;
        case 0x34121cu: goto label_34121c;
        case 0x341220u: goto label_341220;
        case 0x341224u: goto label_341224;
        default: break;
    }

    ctx->pc = 0x3411f0u;

label_3411f0:
    // 0x3411f0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3411f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3411f4:
    // 0x3411f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3411f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3411f8:
    // 0x3411f8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x3411f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_3411fc:
    // 0x3411fc: 0x2463ff7f  addiu       $v1, $v1, -0x81
    ctx->pc = 0x3411fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967167));
label_341200:
    // 0x341200: 0x2c620017  sltiu       $v0, $v1, 0x17
    ctx->pc = 0x341200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_341204:
    // 0x341204: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_341208:
    if (ctx->pc == 0x341208u) {
        ctx->pc = 0x34120Cu;
        goto label_34120c;
    }
    ctx->pc = 0x341204u;
    {
        const bool branch_taken_0x341204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341204) {
            ctx->pc = 0x341238u;
            return;
        }
    }
    ctx->pc = 0x34120Cu;
label_34120c:
    // 0x34120c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34120cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_341210:
    // 0x341210: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x341210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_341214:
    // 0x341214: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x341214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_341218:
    // 0x341218: 0x8c6347e0  lw          $v1, 0x47E0($v1)
    ctx->pc = 0x341218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18400)));
label_34121c:
    // 0x34121c: 0x600008  jr          $v1
label_341220:
    if (ctx->pc == 0x341220u) {
        ctx->pc = 0x341224u;
        goto label_341224;
    }
    ctx->pc = 0x34121Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34121Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x341224u;
label_341224:
    // 0x341224: 0x0  nop
    ctx->pc = 0x341224u;
    // NOP
    ctx->pc = 0x341228u;
}
