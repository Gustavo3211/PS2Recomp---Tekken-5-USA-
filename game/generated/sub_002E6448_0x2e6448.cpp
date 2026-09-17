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

// Function: sub_002E6448
// Address: 0x2e6448 - 0x2e64f8
void sub_002E6448_0x2e6448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6448_0x2e6448");
#endif

    switch (ctx->pc) {
        case 0x2e6480u: goto label_2e6480;
        case 0x2e648cu: goto label_2e648c;
        case 0x2e64a0u: goto label_2e64a0;
        default: break;
    }

    ctx->pc = 0x2e6448u;

    // 0x2e6448: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e6448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e644c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2e644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2e6450: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e6450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2e6454: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2e6454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2e6458: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e6458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e645c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2e645cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2e6460: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6464: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2e6464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2e6468: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e6468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e646c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2e646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2e6470: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x2e6470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e6474: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2e6474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2e6478: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2e6478u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x2e647c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e647cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e6480:
    // 0x2e6480: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e6480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6484: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2E6484u;
    SET_GPR_U32(ctx, 31, 0x2E648Cu);
    ctx->pc = 0x2E6488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6484u;
    // 0x2e6488: 0x26a505c0  addiu       $a1, $s5, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E6484u, 0x2E648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E648Cu;
label_2e648c:
    // 0x2e648c: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x2e648cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2e6490: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6494: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e6494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6498: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E6498u;
    SET_GPR_U32(ctx, 31, 0x2E64A0u);
    ctx->pc = 0x2E649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6498u;
    // 0x2e649c: 0x38700001  xori        $s0, $v1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E6498u, 0x2E64A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64A0u;
label_2e64a0:
    // 0x2e64a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e64a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e64a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e64a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E64A8u;
    {
        const bool branch_taken_0x2e64a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64A8u;
        // 0x2e64ac: 0x2a24000d  slti        $a0, $s1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64a8) {
            ctx->pc = 0x2E64C8u;
            goto label_2e64c8;
        }
    }
    ctx->pc = 0x2E64B0u;
    // 0x2e64b0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E64B0u;
    {
        const bool branch_taken_0x2e64b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64B0u;
        // 0x2e64b4: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64b0) {
            ctx->pc = 0x2E64C0u;
            goto label_2e64c0;
        }
    }
    ctx->pc = 0x2E64B8u;
    // 0x2e64b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E64B8u;
    {
        const bool branch_taken_0x2e64b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64B8u;
        // 0x2e64bc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64b8) {
            ctx->pc = 0x2E64C4u;
            goto label_2e64c4;
        }
    }
    ctx->pc = 0x2E64C0u;
label_2e64c0:
    // 0x2e64c0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2e64c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_2e64c4:
    // 0x2e64c4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e64c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e64c8:
    // 0x2e64c8: 0x5480ffed  bnel        $a0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2E64C8u;
    {
        const bool branch_taken_0x2e64c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e64c8) {
            ctx->pc = 0x2E64CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E64C8u;
            // 0x2e64cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6480;
        }
    }
    ctx->pc = 0x2E64D0u;
    // 0x2e64d0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2e64d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e64d4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2e64d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e64d8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2e64d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e64dc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2e64dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e64e0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2e64e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e64e4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2e64e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e64e8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e64e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e64ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E64ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64ECu;
        // 0x2e64f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E64ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E64F4u;
    // 0x2e64f4: 0x0  nop
    ctx->pc = 0x2e64f4u;
    // NOP
    ctx->pc = 0x2e64f8u;
}
