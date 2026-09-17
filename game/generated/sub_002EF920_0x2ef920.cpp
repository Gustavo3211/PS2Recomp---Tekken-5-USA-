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

// Function: sub_002EF920
// Address: 0x2ef920 - 0x2ef980
void sub_002EF920_0x2ef920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF920_0x2ef920");
#endif

    switch (ctx->pc) {
        case 0x2ef920u: goto label_2ef920;
        case 0x2ef924u: goto label_2ef924;
        case 0x2ef928u: goto label_2ef928;
        case 0x2ef92cu: goto label_2ef92c;
        case 0x2ef930u: goto label_2ef930;
        case 0x2ef934u: goto label_2ef934;
        case 0x2ef938u: goto label_2ef938;
        case 0x2ef93cu: goto label_2ef93c;
        case 0x2ef940u: goto label_2ef940;
        case 0x2ef944u: goto label_2ef944;
        case 0x2ef948u: goto label_2ef948;
        case 0x2ef94cu: goto label_2ef94c;
        case 0x2ef950u: goto label_2ef950;
        case 0x2ef954u: goto label_2ef954;
        case 0x2ef958u: goto label_2ef958;
        case 0x2ef95cu: goto label_2ef95c;
        case 0x2ef960u: goto label_2ef960;
        case 0x2ef964u: goto label_2ef964;
        case 0x2ef968u: goto label_2ef968;
        case 0x2ef96cu: goto label_2ef96c;
        case 0x2ef970u: goto label_2ef970;
        case 0x2ef974u: goto label_2ef974;
        case 0x2ef978u: goto label_2ef978;
        case 0x2ef97cu: goto label_2ef97c;
        default: break;
    }

    ctx->pc = 0x2ef920u;

label_2ef920:
    // 0x2ef920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ef920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ef924:
    // 0x2ef924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ef924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ef928:
    // 0x2ef928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef92c:
    // 0x2ef92c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ef92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2ef930:
    // 0x2ef930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ef930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ef934:
    // 0x2ef934: 0xc0bbe28  jal         func_2EF8A0
label_2ef938:
    if (ctx->pc == 0x2EF938u) {
        ctx->pc = 0x2EF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF934u;
        // 0x2ef938: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF93Cu;
        goto label_2ef93c;
    }
    ctx->pc = 0x2EF934u;
    SET_GPR_U32(ctx, 31, 0x2EF93Cu);
    ctx->pc = 0x2EF938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF934u;
    // 0x2ef938: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF8A0u, 0x2EF934u, 0x2EF93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF93Cu;
label_2ef93c:
    // 0x2ef93c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ef93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ef940:
    // 0x2ef940: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ef940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef944:
    // 0x2ef944: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2ef944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2ef948:
    // 0x2ef948: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef94c:
    // 0x2ef94c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef950:
    // 0x2ef950: 0x60f809  jalr        $v1
label_2ef954:
    if (ctx->pc == 0x2EF954u) {
        ctx->pc = 0x2EF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF950u;
        // 0x2ef954: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF958u;
        goto label_2ef958;
    }
    ctx->pc = 0x2EF950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF958u);
        ctx->pc = 0x2EF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF950u;
        // 0x2ef954: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF950u, 0x2EF958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF958u;
label_2ef958:
    // 0x2ef958: 0xc0bbf84  jal         func_2EFE10
label_2ef95c:
    if (ctx->pc == 0x2EF95Cu) {
        ctx->pc = 0x2EF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF958u;
        // 0x2ef95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF960u;
        goto label_2ef960;
    }
    ctx->pc = 0x2EF958u;
    SET_GPR_U32(ctx, 31, 0x2EF960u);
    ctx->pc = 0x2EF95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF958u;
    // 0x2ef95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFE10u, 0x2EF958u, 0x2EF960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF960u;
label_2ef960:
    // 0x2ef960: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ef960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ef964:
    // 0x2ef964: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2ef964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_2ef968:
    // 0x2ef968: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ef968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ef96c:
    // 0x2ef96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ef96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef970:
    // 0x2ef970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ef970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef974:
    // 0x2ef974: 0x3e00008  jr          $ra
label_2ef978:
    if (ctx->pc == 0x2EF978u) {
        ctx->pc = 0x2EF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF974u;
        // 0x2ef978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF97Cu;
        goto label_2ef97c;
    }
    ctx->pc = 0x2EF974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF974u;
        // 0x2ef978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF97Cu;
label_2ef97c:
    // 0x2ef97c: 0x0  nop
    ctx->pc = 0x2ef97cu;
    // NOP
    ctx->pc = 0x2ef980u;
}
