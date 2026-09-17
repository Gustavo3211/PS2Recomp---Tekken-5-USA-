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

// Function: sub_001F98F8
// Address: 0x1f98f8 - 0x1f9960
void sub_001F98F8_0x1f98f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F98F8_0x1f98f8");
#endif

    switch (ctx->pc) {
        case 0x1f990cu: goto label_1f990c;
        default: break;
    }

    ctx->pc = 0x1f98f8u;

    // 0x1f98f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f98f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f98fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f98fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9900: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f9900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f9904: 0xc07e5a4  jal         func_1F9690
    ctx->pc = 0x1F9904u;
    SET_GPR_U32(ctx, 31, 0x1F990Cu);
    ctx->pc = 0x1F9908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9904u;
    // 0x1f9908: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9690u, 0x1F9904u, 0x1F990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F990Cu;
label_1f990c:
    // 0x1f990c: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x1f990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1f9910: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1f9910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f9914: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F9914u;
    {
        const bool branch_taken_0x1f9914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9914) {
            ctx->pc = 0x1F9918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9914u;
            // 0x1f9918: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9974u;
            return;
        }
    }
    ctx->pc = 0x1F991Cu;
    // 0x1f991c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f991cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f9920: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f9920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f9924: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f9924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f9928: 0x8c633580  lw          $v1, 0x3580($v1)
    ctx->pc = 0x1f9928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13696)));
    // 0x1f992c: 0x600008  jr          $v1
    ctx->pc = 0x1F992Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9938u: goto label_1f9938;
            case 0x1F9940u: goto label_1f9940;
            case 0x1F9948u: goto label_1f9948;
            case 0x1F9950u: goto label_1f9950;
            case 0x1F9958u: goto label_1f9958;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F992Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F9934u;
    // 0x1f9934: 0x0  nop
    ctx->pc = 0x1f9934u;
    // NOP
label_1f9938:
    // 0x1f9938: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F9938u;
    {
        const bool branch_taken_0x1f9938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9938u;
        // 0x1f993c: 0x24028004  addiu       $v0, $zero, -0x7FFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9938) {
            ctx->pc = 0x1F996Cu;
            return;
        }
    }
    ctx->pc = 0x1F9940u;
label_1f9940:
    // 0x1f9940: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F9940u;
    {
        const bool branch_taken_0x1f9940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9940u;
        // 0x1f9944: 0x2402800a  addiu       $v0, $zero, -0x7FF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9940) {
            ctx->pc = 0x1F996Cu;
            return;
        }
    }
    ctx->pc = 0x1F9948u;
label_1f9948:
    // 0x1f9948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9948u;
    {
        const bool branch_taken_0x1f9948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9948u;
        // 0x1f994c: 0x24020245  addiu       $v0, $zero, 0x245 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9948) {
            ctx->pc = 0x1F996Cu;
            return;
        }
    }
    ctx->pc = 0x1F9950u;
label_1f9950:
    // 0x1f9950: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9950u;
    {
        const bool branch_taken_0x1f9950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9950u;
        // 0x1f9954: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9950) {
            ctx->pc = 0x1F996Cu;
            return;
        }
    }
    ctx->pc = 0x1F9958u;
label_1f9958:
    // 0x1f9958: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9958u;
    {
        const bool branch_taken_0x1f9958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9958u;
        // 0x1f995c: 0x2402028a  addiu       $v0, $zero, 0x28A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9958) {
            ctx->pc = 0x1F996Cu;
            return;
        }
    }
    ctx->pc = 0x1F9960u;
}
