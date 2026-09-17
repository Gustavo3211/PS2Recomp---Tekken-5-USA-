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

// Function: sub_002ED220
// Address: 0x2ed220 - 0x2ed2b0
void sub_002ED220_0x2ed220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED220_0x2ed220");
#endif

    switch (ctx->pc) {
        case 0x2ed244u: goto label_2ed244;
        case 0x2ed24cu: goto label_2ed24c;
        case 0x2ed294u: goto label_2ed294;
        case 0x2ed29cu: goto label_2ed29c;
        default: break;
    }

    ctx->pc = 0x2ed220u;

    // 0x2ed220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed22c: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x2ed22cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x2ed230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ed234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ed23c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2ED23Cu;
    SET_GPR_U32(ctx, 31, 0x2ED244u);
    ctx->pc = 0x2ED240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED23Cu;
    // 0x2ed240: 0x260437e0  addiu       $a0, $s0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2ED23Cu, 0x2ED244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED244u;
label_2ed244:
    // 0x2ed244: 0xc0b77ce  jal         func_2DDF38
    ctx->pc = 0x2ED244u;
    SET_GPR_U32(ctx, 31, 0x2ED24Cu);
    ctx->pc = 0x2ED248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED244u;
    // 0x2ed248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF38u, 0x2ED244u, 0x2ED24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED24Cu;
label_2ed24c:
    // 0x2ed24c: 0x260437e0  addiu       $a0, $s0, 0x37E0
    ctx->pc = 0x2ed24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    // 0x2ed250: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ed250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed258: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED258u;
    {
        const bool branch_taken_0x2ed258 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ED25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED258u;
        // 0x2ed25c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed258) {
            ctx->pc = 0x2ED274u;
            goto label_2ed274;
        }
    }
    ctx->pc = 0x2ED260u;
    // 0x2ed260: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED260u;
    {
        const bool branch_taken_0x2ed260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED260u;
        // 0x2ed264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed260) {
            ctx->pc = 0x2ED280u;
            goto label_2ed280;
        }
    }
    ctx->pc = 0x2ED268u;
    // 0x2ed268: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ed268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ed26c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED26Cu;
    {
        const bool branch_taken_0x2ed26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED26Cu;
        // 0x2ed270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed26c) {
            ctx->pc = 0x2ED280u;
            goto label_2ed280;
        }
    }
    ctx->pc = 0x2ED274u;
label_2ed274:
    // 0x2ed274: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2ed274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ed278: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED278u;
    {
        const bool branch_taken_0x2ed278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED278u;
        // 0x2ed27c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed278) {
            ctx->pc = 0x2ED288u;
            goto label_2ed288;
        }
    }
    ctx->pc = 0x2ED280u;
label_2ed280:
    // 0x2ed280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED280u;
    {
        const bool branch_taken_0x2ed280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED280u;
        // 0x2ed284: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed280) {
            ctx->pc = 0x2ED28Cu;
            goto label_2ed28c;
        }
    }
    ctx->pc = 0x2ED288u;
label_2ed288:
    // 0x2ed288: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2ed288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2ed28c:
    // 0x2ed28c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2ED28Cu;
    SET_GPR_U32(ctx, 31, 0x2ED294u);
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2ED28Cu, 0x2ED294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED294u;
label_2ed294:
    // 0x2ed294: 0xc0b77de  jal         func_2DDF78
    ctx->pc = 0x2ED294u;
    SET_GPR_U32(ctx, 31, 0x2ED29Cu);
    ctx->pc = 0x2ED298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED294u;
    // 0x2ed298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF78u, 0x2ED294u, 0x2ED29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED29Cu;
label_2ed29c:
    // 0x2ed29c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed2a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed2a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2A8u;
        // 0x2ed2ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED2B0u;
}
