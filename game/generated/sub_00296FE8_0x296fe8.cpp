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

// Function: sub_00296FE8
// Address: 0x296fe8 - 0x297120
void sub_00296FE8_0x296fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296FE8_0x296fe8");
#endif

    switch (ctx->pc) {
        case 0x297020u: goto label_297020;
        case 0x29702cu: goto label_29702c;
        case 0x297038u: goto label_297038;
        case 0x2970c0u: goto label_2970c0;
        case 0x2970ccu: goto label_2970cc;
        case 0x2970d8u: goto label_2970d8;
        default: break;
    }

    ctx->pc = 0x296fe8u;

    // 0x296fe8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x296fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x296fec: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x296fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x296ff0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x296ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x296ff4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x296ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ff8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x296ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x296ffc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x296ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297000: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x297000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x297004: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x297004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297008: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x297008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x29700c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29700cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297010: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x297010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x297014: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x297014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x297018: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x297018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29701c: 0x0  nop
    ctx->pc = 0x29701cu;
    // NOP
label_297020:
    // 0x297020: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297024: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x297024u;
    SET_GPR_U32(ctx, 31, 0x29702Cu);
    ctx->pc = 0x297028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297024u;
    // 0x297028: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x297024u, 0x29702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29702Cu;
label_29702c:
    // 0x29702c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29702cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297030: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x297030u;
    SET_GPR_U32(ctx, 31, 0x297038u);
    ctx->pc = 0x297034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297030u;
    // 0x297034: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x297030u, 0x297038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297038u;
label_297038:
    // 0x297038: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29703c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29703cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297040: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x297040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x297044: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x297044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x297048: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297048u;
    {
        const bool branch_taken_0x297048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297048u;
        // 0x29704c: 0x2a05000a  slti        $a1, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297048) {
            ctx->pc = 0x297064u;
            goto label_297064;
        }
    }
    ctx->pc = 0x297050u;
    // 0x297050: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x297050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x297054: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x297058: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x297058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29705c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x29705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x297060: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x297060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_297064:
    // 0x297064: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x297064u;
    {
        const bool branch_taken_0x297064 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x297068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297064u;
        // 0x297068: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297064) {
            ctx->pc = 0x297020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297020;
        }
    }
    ctx->pc = 0x29706Cu;
    // 0x29706c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x29706cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297070: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x297070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x297074: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x297074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297078: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x297078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29707c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x29707cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297080: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x297080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297084: 0x3e00008  jr          $ra
    ctx->pc = 0x297084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297084u;
        // 0x297088: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29708Cu;
    // 0x29708c: 0x0  nop
    ctx->pc = 0x29708cu;
    // NOP
    // 0x297090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x297090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x297094: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x297094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x297098: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x297098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x29709c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29709cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970a0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2970a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2970a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2970a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970a8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2970a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2970ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2970acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970b0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2970b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2970b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2970b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2970b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970bc: 0x0  nop
    ctx->pc = 0x2970bcu;
    // NOP
label_2970c0:
    // 0x2970c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2970c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970c4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2970C4u;
    SET_GPR_U32(ctx, 31, 0x2970CCu);
    ctx->pc = 0x2970C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970C4u;
    // 0x2970c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2970C4u, 0x2970CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970CCu;
label_2970cc:
    // 0x2970cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2970ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970d0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2970D0u;
    SET_GPR_U32(ctx, 31, 0x2970D8u);
    ctx->pc = 0x2970D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970D0u;
    // 0x2970d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2970D0u, 0x2970D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970D8u;
label_2970d8:
    // 0x2970d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2970d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2970dc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2970dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2970e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2970e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2970e4: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2970e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2970e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2970E8u;
    {
        const bool branch_taken_0x2970e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2970ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970E8u;
        // 0x2970ec: 0x2a03000a  slti        $v1, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2970e8) {
            ctx->pc = 0x2970F8u;
            goto label_2970f8;
        }
    }
    ctx->pc = 0x2970F0u;
    // 0x2970f0: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x2970f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2970f4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2970f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2970f8:
    // 0x2970f8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2970F8u;
    {
        const bool branch_taken_0x2970f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2970FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970F8u;
        // 0x2970fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2970f8) {
            ctx->pc = 0x2970C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2970c0;
        }
    }
    ctx->pc = 0x297100u;
    // 0x297100: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x297100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297104: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x297104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x297108: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x297108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29710c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x29710cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x297110: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x297110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297114: 0x3e00008  jr          $ra
    ctx->pc = 0x297114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297114u;
        // 0x297118: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29711Cu;
    // 0x29711c: 0x0  nop
    ctx->pc = 0x29711cu;
    // NOP
    ctx->pc = 0x297120u;
}
