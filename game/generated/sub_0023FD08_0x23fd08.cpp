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

// Function: sub_0023FD08
// Address: 0x23fd08 - 0x23fdb8
void sub_0023FD08_0x23fd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FD08_0x23fd08");
#endif

    switch (ctx->pc) {
        case 0x23fd54u: goto label_23fd54;
        case 0x23fd60u: goto label_23fd60;
        case 0x23fd7cu: goto label_23fd7c;
        case 0x23fd88u: goto label_23fd88;
        case 0x23fd9cu: goto label_23fd9c;
        default: break;
    }

    ctx->pc = 0x23fd08u;

    // 0x23fd08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23fd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23fd0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fd10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fd14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23fd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23fd1c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x23fd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23fd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23fd24: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x23fd24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23fd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23fd2c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x23fd2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23fd30: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23FD30u;
    {
        const bool branch_taken_0x23fd30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD30u;
        // 0x23fd34: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd30) {
            ctx->pc = 0x23FD70u;
            goto label_23fd70;
        }
    }
    ctx->pc = 0x23FD38u;
    // 0x23fd38: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x23FD38u;
    {
        const bool branch_taken_0x23fd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fd38) {
            ctx->pc = 0x23FD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FD38u;
            // 0x23fd3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FDA4u;
            goto label_23fda4;
        }
    }
    ctx->pc = 0x23FD40u;
    // 0x23fd40: 0x54a00018  bnel        $a1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x23FD40u;
    {
        const bool branch_taken_0x23fd40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fd40) {
            ctx->pc = 0x23FD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FD40u;
            // 0x23fd44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FDA4u;
            goto label_23fda4;
        }
    }
    ctx->pc = 0x23FD48u;
    // 0x23fd48: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x23fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x23fd4c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x23FD4Cu;
    SET_GPR_U32(ctx, 31, 0x23FD54u);
    ctx->pc = 0x23FD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD4Cu;
    // 0x23fd50: 0x24a5b718  addiu       $a1, $a1, -0x48E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x23FD4Cu, 0x23FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD54u;
label_23fd54:
    // 0x23fd54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23fd58: 0xc08fcde  jal         func_23F378
    ctx->pc = 0x23FD58u;
    SET_GPR_U32(ctx, 31, 0x23FD60u);
    ctx->pc = 0x23FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD58u;
    // 0x23fd5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F378u, 0x23FD58u, 0x23FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD60u;
label_23fd60:
    // 0x23fd60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x23fd68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23FD68u;
    {
        const bool branch_taken_0x23fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD68u;
        // 0x23fd6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd68) {
            ctx->pc = 0x23FD94u;
            goto label_23fd94;
        }
    }
    ctx->pc = 0x23FD70u;
label_23fd70:
    // 0x23fd70: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x23fd70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x23fd74: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x23FD74u;
    SET_GPR_U32(ctx, 31, 0x23FD7Cu);
    ctx->pc = 0x23FD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD74u;
    // 0x23fd78: 0x24a5b700  addiu       $a1, $a1, -0x4900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x23FD74u, 0x23FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD7Cu;
label_23fd7c:
    // 0x23fd7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fd80: 0xc08fcde  jal         func_23F378
    ctx->pc = 0x23FD80u;
    SET_GPR_U32(ctx, 31, 0x23FD88u);
    ctx->pc = 0x23FD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD80u;
    // 0x23fd84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F378u, 0x23FD80u, 0x23FD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD88u;
label_23fd88:
    // 0x23fd88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x23fd90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23fd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23fd94:
    // 0x23fd94: 0xc08ff2c  jal         func_23FCB0
    ctx->pc = 0x23FD94u;
    SET_GPR_U32(ctx, 31, 0x23FD9Cu);
    ctx->pc = 0x23FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FCB0u, 0x23FD94u, 0x23FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD9Cu;
label_23fd9c:
    // 0x23fd9c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x23fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x23fda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23fda4:
    // 0x23fda4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23fda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fda8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23fda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fdac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23fdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23fdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x23FDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDB0u;
        // 0x23fdb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FDB8u;
}
