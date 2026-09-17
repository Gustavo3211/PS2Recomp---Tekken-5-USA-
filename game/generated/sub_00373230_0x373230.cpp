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

// Function: sub_00373230
// Address: 0x373230 - 0x3732a0
void sub_00373230_0x373230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373230_0x373230");
#endif

    ctx->pc = 0x373230u;

    // 0x373230: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x373230u;
    {
        const bool branch_taken_0x373230 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x373230) {
            ctx->pc = 0x3732BCu;
            return;
        }
    }
    ctx->pc = 0x373238u;
    // 0x373238: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x373238u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x37323c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x37323cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x373240: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x373240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x373244: 0x8d020898  lw          $v0, 0x898($t0)
    ctx->pc = 0x373244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2200)));
    // 0x373248: 0x9442006c  lhu         $v0, 0x6C($v0)
    ctx->pc = 0x373248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x37324c: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x37324cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x373250: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x373250u;
    {
        const bool branch_taken_0x373250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x373254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373250u;
        // 0x373254: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373250) {
            ctx->pc = 0x3732BCu;
            return;
        }
    }
    ctx->pc = 0x373258u;
    // 0x373258: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x373258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x37325c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x373260: 0x8c631dc0  lw          $v1, 0x1DC0($v1)
    ctx->pc = 0x373260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7616)));
    // 0x373264: 0x600008  jr          $v1
    ctx->pc = 0x373264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x373270u: goto label_373270;
            case 0x373298u: goto label_373298;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373264u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37326Cu;
    // 0x37326c: 0x0  nop
    ctx->pc = 0x37326cu;
    // NOP
label_373270:
    // 0x373270: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x373270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x373274: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x373274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x373278: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x373278u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x37327c: 0x8d020898  lw          $v0, 0x898($t0)
    ctx->pc = 0x37327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2200)));
    // 0x373280: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x373280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x373284: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x373284u;
    {
        const bool branch_taken_0x373284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x373288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373284u;
        // 0x373288: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373284) {
            ctx->pc = 0x3732BCu;
            return;
        }
    }
    ctx->pc = 0x37328Cu;
    // 0x37328c: 0x2442f688  addiu       $v0, $v0, -0x978
    ctx->pc = 0x37328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964872));
    // 0x373290: 0x3e00008  jr          $ra
    ctx->pc = 0x373290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373290u;
        // 0x373294: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373298u;
label_373298:
    // 0x373298: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x373298u;
    {
        const bool branch_taken_0x373298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373298u;
        // 0x37329c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373298) {
            ctx->pc = 0x3732B4u;
            return;
        }
    }
    ctx->pc = 0x3732A0u;
}
