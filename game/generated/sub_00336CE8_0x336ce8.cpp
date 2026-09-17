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

// Function: sub_00336CE8
// Address: 0x336ce8 - 0x336e08
void sub_00336CE8_0x336ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336CE8_0x336ce8");
#endif

    switch (ctx->pc) {
        case 0x336d30u: goto label_336d30;
        case 0x336d58u: goto label_336d58;
        default: break;
    }

    ctx->pc = 0x336ce8u;

    // 0x336ce8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x336ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x336cec: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x336cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x336cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x336cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336cf4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x336cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x336cf8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x336cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x336cfc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x336cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x336d00: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x336d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x336d04: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x336d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x336d08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x336d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x336d0c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x336d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x336d10: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x336d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x336d14: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x336d14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x336d18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x336d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336d1c: 0x10640031  beq         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x336D1Cu;
    {
        const bool branch_taken_0x336d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x336D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D1Cu;
        // 0x336d20: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336d1c) {
            ctx->pc = 0x336DE4u;
            goto label_336de4;
        }
    }
    ctx->pc = 0x336D24u;
    // 0x336d24: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x336d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d28: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x336d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x336d2c: 0x26300130  addiu       $s0, $s1, 0x130
    ctx->pc = 0x336d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_336d30:
    // 0x336d30: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x336d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x336d34: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x336d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336d38: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x336d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x336d3c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x336D3Cu;
    {
        const bool branch_taken_0x336d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336d3c) {
            ctx->pc = 0x336D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336D3Cu;
            // 0x336d40: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336DD0u;
            goto label_336dd0;
        }
    }
    ctx->pc = 0x336D44u;
    // 0x336d44: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x336d44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x336d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x336d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d50: 0xc0cdab6  jal         func_336AD8
    ctx->pc = 0x336D50u;
    SET_GPR_U32(ctx, 31, 0x336D58u);
    ctx->pc = 0x336D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336D50u;
    // 0x336d54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336AD8u, 0x336D50u, 0x336D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D58u;
label_336d58:
    // 0x336d58: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x336d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x336d5c: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x336d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    // 0x336d60: 0x26240144  addiu       $a0, $s1, 0x144
    ctx->pc = 0x336d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 324));
    // 0x336d64: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x336d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x336d68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x336d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336d6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x336d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x336d70: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x336d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x336d74: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x336d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x336d78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x336d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x336d7c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x336d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x336d80: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x336d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x336d84: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x336d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x336d88: 0xb0a2000f  sdl         $v0, 0xF($a1)
    ctx->pc = 0x336d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336d8c: 0xb4a20008  sdr         $v0, 0x8($a1)
    ctx->pc = 0x336d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336d90: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x336d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x336d94: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x336D94u;
    {
        const bool branch_taken_0x336d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336d94) {
            ctx->pc = 0x336D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336D94u;
            // 0x336d98: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336DA8u;
            goto label_336da8;
        }
    }
    ctx->pc = 0x336D9Cu;
    // 0x336d9c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x336d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x336da0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336DA0u;
    {
        const bool branch_taken_0x336da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336DA0u;
        // 0x336da4: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336da0) {
            ctx->pc = 0x336DB4u;
            goto label_336db4;
        }
    }
    ctx->pc = 0x336DA8u;
label_336da8:
    // 0x336da8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x336da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x336dac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x336dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x336db0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x336db0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_336db4:
    // 0x336db4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x336db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x336db8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x336db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336dbc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x336dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x336dc0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x336dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x336dc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x336dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x336dc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336DC8u;
    {
        const bool branch_taken_0x336dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336DC8u;
        // 0x336dcc: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336dc8) {
            ctx->pc = 0x336DE8u;
            goto label_336de8;
        }
    }
    ctx->pc = 0x336DD0u;
label_336dd0:
    // 0x336dd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x336dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336dd4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x336dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336dd8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x336dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x336ddc: 0x1464ffd4  bne         $v1, $a0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x336DDCu;
    {
        const bool branch_taken_0x336ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x336DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336DDCu;
        // 0x336de0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ddc) {
            ctx->pc = 0x336D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336d30;
        }
    }
    ctx->pc = 0x336DE4u;
label_336de4:
    // 0x336de4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x336de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_336de8:
    // 0x336de8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x336de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x336dec: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x336decu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x336df0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x336df0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x336df4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x336df4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x336df8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x336df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x336dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x336DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336DFCu;
        // 0x336e00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336E04u;
    // 0x336e04: 0x0  nop
    ctx->pc = 0x336e04u;
    // NOP
    ctx->pc = 0x336e08u;
}
