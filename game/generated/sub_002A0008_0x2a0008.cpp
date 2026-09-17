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

// Function: sub_002A0008
// Address: 0x2a0008 - 0x2a00b0
void sub_002A0008_0x2a0008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0008_0x2a0008");
#endif

    switch (ctx->pc) {
        case 0x2a0038u: goto label_2a0038;
        case 0x2a004cu: goto label_2a004c;
        case 0x2a0084u: goto label_2a0084;
        case 0x2a0094u: goto label_2a0094;
        default: break;
    }

    ctx->pc = 0x2a0008u;

    // 0x2a0008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a000c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a0010: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a0010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a0014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a0014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a0018: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a0018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a001c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a0020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a0020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0024: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a0024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a0028: 0x2412efff  addiu       $s2, $zero, -0x1001
    ctx->pc = 0x2a0028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a002c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a002cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a0030: 0x2453cab8  addiu       $s3, $v0, -0x3548
    ctx->pc = 0x2a0030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953656));
    // 0x2a0034: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2a0034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2a0038:
    // 0x2a0038: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a0038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a003c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2a003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a0040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0044: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0044u;
    SET_GPR_U32(ctx, 31, 0x2A004Cu);
    ctx->pc = 0x2A0048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0044u;
    // 0x2a0048: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0044u, 0x2A004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A004Cu;
label_2a004c:
    // 0x2a004c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a004cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0050: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0050u;
    {
        const bool branch_taken_0x2a0050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0050u;
        // 0x2a0054: 0x2a04000a  slti        $a0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0050) {
            ctx->pc = 0x2A0064u;
            goto label_2a0064;
        }
    }
    ctx->pc = 0x2A0058u;
    // 0x2a0058: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a0058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a005c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2a005cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2a0060: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a0060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a0064:
    // 0x2a0064: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A0064u;
    {
        const bool branch_taken_0x2a0064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0064u;
        // 0x2a0068: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0064) {
            ctx->pc = 0x2A0038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0038;
        }
    }
    ctx->pc = 0x2A006Cu;
    // 0x2a006c: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x2a006cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x2a0070: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a0070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0074: 0x261077e0  addiu       $s0, $s0, 0x77E0
    ctx->pc = 0x2a0074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30688));
    // 0x2a0078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a007c: 0xc0a8066  jal         func_2A0198
    ctx->pc = 0x2A007Cu;
    SET_GPR_U32(ctx, 31, 0x2A0084u);
    ctx->pc = 0x2A0080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A007Cu;
    // 0x2a0080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0198u, 0x2A007Cu, 0x2A0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0084u;
label_2a0084:
    // 0x2a0084: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x2a0084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x2a0088: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a0088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a008c: 0xc0a8066  jal         func_2A0198
    ctx->pc = 0x2A008Cu;
    SET_GPR_U32(ctx, 31, 0x2A0094u);
    ctx->pc = 0x2A0090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A008Cu;
    // 0x2a0090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0198u, 0x2A008Cu, 0x2A0094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0094u;
label_2a0094:
    // 0x2a0094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a0098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a009c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a009cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a00a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a00a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a00a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a00a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a00a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A00A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A00ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00A8u;
        // 0x2a00ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A00A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A00B0u;
}
