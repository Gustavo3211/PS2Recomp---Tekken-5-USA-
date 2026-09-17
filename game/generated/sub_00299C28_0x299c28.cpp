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

// Function: sub_00299C28
// Address: 0x299c28 - 0x299d40
void sub_00299C28_0x299c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299C28_0x299c28");
#endif

    switch (ctx->pc) {
        case 0x299c80u: goto label_299c80;
        case 0x299c90u: goto label_299c90;
        case 0x299cacu: goto label_299cac;
        case 0x299cd0u: goto label_299cd0;
        case 0x299cfcu: goto label_299cfc;
        default: break;
    }

    ctx->pc = 0x299c28u;

    // 0x299c28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x299c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x299c2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x299c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x299c30: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x299c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x299c34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x299c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x299c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x299c3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x299c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c40: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x299c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x299c44: 0x2413efff  addiu       $s3, $zero, -0x1001
    ctx->pc = 0x299c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x299c48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x299c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x299c4c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x299c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x299c50: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x299c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x299c54: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x299c54u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x299c58: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x299c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x299c5c: 0x2457c660  addiu       $s7, $v0, -0x39A0
    ctx->pc = 0x299c5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952544));
    // 0x299c60: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x299c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299c64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x299c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x299c68: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x299c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x299c6c: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x299c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x299c70: 0x24750098  addiu       $s5, $v1, 0x98
    ctx->pc = 0x299c70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x299c74: 0x24940028  addiu       $s4, $a0, 0x28
    ctx->pc = 0x299c74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x299c78: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x299c78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x299c7c: 0x0  nop
    ctx->pc = 0x299c7cu;
    // NOP
label_299c80:
    // 0x299c80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c84: 0x26c5c0b0  addiu       $a1, $s6, -0x3F50
    ctx->pc = 0x299c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951088));
    // 0x299c88: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x299C88u;
    SET_GPR_U32(ctx, 31, 0x299C90u);
    ctx->pc = 0x299C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299C88u;
    // 0x299c8c: 0x2173021  addu        $a2, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x299C88u, 0x299C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299C90u;
label_299c90:
    // 0x299c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c94: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x299c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x299c98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x299c98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x299c9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x299C9Cu;
    {
        const bool branch_taken_0x299c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C9Cu;
        // 0x299ca0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c9c) {
            ctx->pc = 0x299CC8u;
            goto label_299cc8;
        }
    }
    ctx->pc = 0x299CA4u;
    // 0x299ca4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x299CA4u;
    SET_GPR_U32(ctx, 31, 0x299CACu);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x299CA4u, 0x299CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CACu;
label_299cac:
    // 0x299cac: 0x2152021  addu        $a0, $s0, $s5
    ctx->pc = 0x299cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x299cb0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x299cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x299cb4: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x299cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x299cb8: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x299cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x299cbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x299CBCu;
    {
        const bool branch_taken_0x299cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CBCu;
        // 0x299cc0: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cbc) {
            ctx->pc = 0x299CF0u;
            goto label_299cf0;
        }
    }
    ctx->pc = 0x299CC4u;
    // 0x299cc4: 0x0  nop
    ctx->pc = 0x299cc4u;
    // NOP
label_299cc8:
    // 0x299cc8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x299CC8u;
    SET_GPR_U32(ctx, 31, 0x299CD0u);
    ctx->pc = 0x299CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299CC8u;
    // 0x299ccc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x299CC8u, 0x299CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CD0u;
label_299cd0:
    // 0x299cd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x299CD0u;
    {
        const bool branch_taken_0x299cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CD0u;
        // 0x299cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cd0) {
            ctx->pc = 0x299CF4u;
            goto label_299cf4;
        }
    }
    ctx->pc = 0x299CD8u;
    // 0x299cd8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x299cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299cdc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x299CDCu;
    {
        const bool branch_taken_0x299cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299cdc) {
            ctx->pc = 0x299CF4u;
            goto label_299cf4;
        }
    }
    ctx->pc = 0x299CE4u;
    // 0x299ce4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x299ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x299ce8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x299ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x299cec: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x299cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_299cf0:
    // 0x299cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_299cf4:
    // 0x299cf4: 0xc0a5b8c  jal         func_296E30
    ctx->pc = 0x299CF4u;
    SET_GPR_U32(ctx, 31, 0x299CFCu);
    ctx->pc = 0x299CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299CF4u;
    // 0x299cf8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E30u, 0x299CF4u, 0x299CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CFCu;
label_299cfc:
    // 0x299cfc: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x299cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x299d00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x299d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x299d04: 0x2a420021  slti        $v0, $s2, 0x21
    ctx->pc = 0x299d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x299d08: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x299D08u;
    {
        const bool branch_taken_0x299d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D08u;
        // 0x299d0c: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d08) {
            ctx->pc = 0x299C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299c80;
        }
    }
    ctx->pc = 0x299D10u;
    // 0x299d10: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299d14: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x299d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x299d18: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x299d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299d1c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x299d1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x299d20: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x299d20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299d24: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x299d24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x299d28: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x299d28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299d2c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x299d2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x299d30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x299d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299d34: 0x3e00008  jr          $ra
    ctx->pc = 0x299D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D34u;
        // 0x299d38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299D3Cu;
    // 0x299d3c: 0x0  nop
    ctx->pc = 0x299d3cu;
    // NOP
    ctx->pc = 0x299d40u;
}
