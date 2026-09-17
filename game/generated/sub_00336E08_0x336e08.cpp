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

// Function: sub_00336E08
// Address: 0x336e08 - 0x336f50
void sub_00336E08_0x336e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336E08_0x336e08");
#endif

    switch (ctx->pc) {
        case 0x336e50u: goto label_336e50;
        case 0x336e68u: goto label_336e68;
        default: break;
    }

    ctx->pc = 0x336e08u;

    // 0x336e08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x336e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x336e0c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x336e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x336e10: 0x24900144  addiu       $s0, $a0, 0x144
    ctx->pc = 0x336e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 324));
    // 0x336e14: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x336e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x336e18: 0x24910130  addiu       $s1, $a0, 0x130
    ctx->pc = 0x336e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x336e1c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x336e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x336e20: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x336e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x336e24: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x336e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x336e28: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x336e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x336e2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x336e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x336e30: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x336e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x336e34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x336e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336e38: 0x1050003f  beq         $v0, $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x336E38u;
    {
        const bool branch_taken_0x336e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x336E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E38u;
        // 0x336e3c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e38) {
            ctx->pc = 0x336F38u;
            goto label_336f38;
        }
    }
    ctx->pc = 0x336E40u;
    // 0x336e40: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x336e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x336e44: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x336e44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336e48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x336e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336e4c: 0x0  nop
    ctx->pc = 0x336e4cu;
    // NOP
label_336e50:
    // 0x336e50: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x336e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x336e54: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x336e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x336e58: 0x54a70031  bnel        $a1, $a3, . + 4 + (0x31 << 2)
    ctx->pc = 0x336E58u;
    {
        const bool branch_taken_0x336e58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x336e58) {
            ctx->pc = 0x336E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336E58u;
            // 0x336e5c: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336F20u;
            goto label_336f20;
        }
    }
    ctx->pc = 0x336E60u;
    // 0x336e60: 0xc0cda60  jal         func_336980
    ctx->pc = 0x336E60u;
    SET_GPR_U32(ctx, 31, 0x336E68u);
    ctx->pc = 0x336E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336E60u;
    // 0x336e64: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336980u, 0x336E60u, 0x336E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336E68u;
label_336e68:
    // 0x336e68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x336e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x336e6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x336e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336e70: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x336e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x336e74: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x336e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x336e78: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x336e78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x336e7c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x336e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x336e80: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x336e80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x336e84: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x336e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336e88: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336E88u;
    {
        const bool branch_taken_0x336e88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x336e88) {
            ctx->pc = 0x336E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336E88u;
            // 0x336e8c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336EA0u;
            goto label_336ea0;
        }
    }
    ctx->pc = 0x336E90u;
    // 0x336e90: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x336e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336e94: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x336e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x336e98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x336E98u;
    {
        const bool branch_taken_0x336e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E98u;
        // 0x336e9c: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e98) {
            ctx->pc = 0x336ECCu;
            goto label_336ecc;
        }
    }
    ctx->pc = 0x336EA0u;
label_336ea0:
    // 0x336ea0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336EA0u;
    {
        const bool branch_taken_0x336ea0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x336EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336EA0u;
        // 0x336ea4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ea0) {
            ctx->pc = 0x336EB8u;
            goto label_336eb8;
        }
    }
    ctx->pc = 0x336EA8u;
    // 0x336ea8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x336ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x336eac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336EACu;
    {
        const bool branch_taken_0x336eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336EACu;
        // 0x336eb0: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336eac) {
            ctx->pc = 0x336ECCu;
            goto label_336ecc;
        }
    }
    ctx->pc = 0x336EB4u;
    // 0x336eb4: 0x0  nop
    ctx->pc = 0x336eb4u;
    // NOP
label_336eb8:
    // 0x336eb8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x336eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336ebc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x336ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x336ec0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x336ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336ec4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x336ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336ec8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x336ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_336ecc:
    // 0x336ecc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x336eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x336ed0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336ed4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x336ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x336ed8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x336ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x336edc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x336EDCu;
    {
        const bool branch_taken_0x336edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336edc) {
            ctx->pc = 0x336EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336EDCu;
            // 0x336ee0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336EF0u;
            goto label_336ef0;
        }
    }
    ctx->pc = 0x336EE4u;
    // 0x336ee4: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x336ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x336ee8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336EE8u;
    {
        const bool branch_taken_0x336ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336EE8u;
        // 0x336eec: 0xacb10000  sw          $s1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ee8) {
            ctx->pc = 0x336EFCu;
            goto label_336efc;
        }
    }
    ctx->pc = 0x336EF0u;
label_336ef0:
    // 0x336ef0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x336ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x336ef4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x336ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x336ef8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x336ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_336efc:
    // 0x336efc: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x336efcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x336f00: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x336f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x336f04: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x336f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x336f08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x336f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336f0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336f10: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x336f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x336f14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x336F14u;
    {
        const bool branch_taken_0x336f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F14u;
        // 0x336f18: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336f14) {
            ctx->pc = 0x336F38u;
            goto label_336f38;
        }
    }
    ctx->pc = 0x336F1Cu;
    // 0x336f1c: 0x0  nop
    ctx->pc = 0x336f1cu;
    // NOP
label_336f20:
    // 0x336f20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x336f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336f24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x336f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336f28: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x336f28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x336f2c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x336f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336f30: 0x1446ffc7  bne         $v0, $a2, . + 4 + (-0x39 << 2)
    ctx->pc = 0x336F30u;
    {
        const bool branch_taken_0x336f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x336F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F30u;
        // 0x336f34: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336f30) {
            ctx->pc = 0x336E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336e50;
        }
    }
    ctx->pc = 0x336F38u;
label_336f38:
    // 0x336f38: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x336f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x336f3c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x336f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x336f40: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x336f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x336f44: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x336f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x336f48: 0x3e00008  jr          $ra
    ctx->pc = 0x336F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F48u;
        // 0x336f4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336F50u;
}
