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

// Function: sub_0024A040
// Address: 0x24a040 - 0x24a098
void sub_0024A040_0x24a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A040_0x24a040");
#endif

    switch (ctx->pc) {
        case 0x24a040u: goto label_24a040;
        case 0x24a044u: goto label_24a044;
        case 0x24a048u: goto label_24a048;
        case 0x24a04cu: goto label_24a04c;
        case 0x24a050u: goto label_24a050;
        case 0x24a054u: goto label_24a054;
        case 0x24a058u: goto label_24a058;
        case 0x24a05cu: goto label_24a05c;
        case 0x24a060u: goto label_24a060;
        case 0x24a064u: goto label_24a064;
        case 0x24a068u: goto label_24a068;
        case 0x24a06cu: goto label_24a06c;
        case 0x24a070u: goto label_24a070;
        case 0x24a074u: goto label_24a074;
        case 0x24a078u: goto label_24a078;
        case 0x24a07cu: goto label_24a07c;
        case 0x24a080u: goto label_24a080;
        case 0x24a084u: goto label_24a084;
        case 0x24a088u: goto label_24a088;
        case 0x24a08cu: goto label_24a08c;
        case 0x24a090u: goto label_24a090;
        case 0x24a094u: goto label_24a094;
        default: break;
    }

    ctx->pc = 0x24a040u;

label_24a040:
    // 0x24a040: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24a040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_24a044:
    // 0x24a044: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x24a044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24a048:
    // 0x24a048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24a04c:
    // 0x24a04c: 0x24631670  addiu       $v1, $v1, 0x1670
    ctx->pc = 0x24a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5744));
label_24a050:
    // 0x24a050: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24a050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24a054:
    // 0x24a054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24a058:
    // 0x24a058: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24a05c:
    // 0x24a05c: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x24a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_24a060:
    // 0x24a060: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x24a060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a064:
    // 0x24a064: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x24a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_24a068:
    // 0x24a068: 0x54440035  bnel        $v0, $a0, . + 4 + (0x35 << 2)
label_24a06c:
    if (ctx->pc == 0x24A06Cu) {
        ctx->pc = 0x24A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A068u;
        // 0x24a06c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A070u;
        goto label_24a070;
    }
    ctx->pc = 0x24A068u;
    {
        const bool branch_taken_0x24a068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x24a068) {
            ctx->pc = 0x24A06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A068u;
            // 0x24a06c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A140u;
            return;
        }
    }
    ctx->pc = 0x24A070u;
label_24a070:
    // 0x24a070: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24a074:
    // 0x24a074: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x24a074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_24a078:
    // 0x24a078: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_24a07c:
    if (ctx->pc == 0x24A07Cu) {
        ctx->pc = 0x24A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A078u;
        // 0x24a07c: 0x25090008  addiu       $t1, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A080u;
        goto label_24a080;
    }
    ctx->pc = 0x24A078u;
    {
        const bool branch_taken_0x24a078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A078u;
        // 0x24a07c: 0x25090008  addiu       $t1, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a078) {
            ctx->pc = 0x24A0FCu;
            return;
        }
    }
    ctx->pc = 0x24A080u;
label_24a080:
    // 0x24a080: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24a080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24a084:
    // 0x24a084: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24a084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_24a088:
    // 0x24a088: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24a088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24a08c:
    // 0x24a08c: 0x8c631560  lw          $v1, 0x1560($v1)
    ctx->pc = 0x24a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5472)));
label_24a090:
    // 0x24a090: 0x600008  jr          $v1
label_24a094:
    if (ctx->pc == 0x24A094u) {
        ctx->pc = 0x24A098u;
        goto label_fallthrough_0x24a090;
    }
    ctx->pc = 0x24A090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A090u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x24a090:
    ctx->pc = 0x24A098u;
}
