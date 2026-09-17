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

// Function: sub_00489D38
// Address: 0x489d38 - 0x489ff8
void sub_00489D38_0x489d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489D38_0x489d38");
#endif

    switch (ctx->pc) {
        case 0x489dd8u: goto label_489dd8;
        case 0x489e10u: goto label_489e10;
        case 0x489eccu: goto label_489ecc;
        case 0x489f18u: goto label_489f18;
        case 0x489f90u: goto label_489f90;
        default: break;
    }

    ctx->pc = 0x489d38u;

    // 0x489d38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x489d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x489d3c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x489d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x489d40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x489d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x489d44: 0x3c10007c  lui         $s0, 0x7C
    ctx->pc = 0x489d44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)124 << 16));
    // 0x489d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x489d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x489d4c: 0x26105b08  addiu       $s0, $s0, 0x5B08
    ctx->pc = 0x489d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23304));
    // 0x489d50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x489d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x489d54: 0x3c12007c  lui         $s2, 0x7C
    ctx->pc = 0x489d54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)124 << 16));
    // 0x489d58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x489d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x489d5c: 0x3c13007c  lui         $s3, 0x7C
    ctx->pc = 0x489d5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)124 << 16));
    // 0x489d60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x489d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x489d64: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x489d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x489d68: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x489d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x489d6c: 0x26525b14  addiu       $s2, $s2, 0x5B14
    ctx->pc = 0x489d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 23316));
    // 0x489d70: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x489d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x489d74: 0x3c16007c  lui         $s6, 0x7C
    ctx->pc = 0x489d74u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)124 << 16));
    // 0x489d78: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x489d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x489d7c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x489d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x489d80: 0x26d15b00  addiu       $s1, $s6, 0x5B00
    ctx->pc = 0x489d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 23296));
    // 0x489d84: 0x26735b18  addiu       $s3, $s3, 0x5B18
    ctx->pc = 0x489d84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 23320));
    // 0x489d88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x489d88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7C5B08u));
    // 0x489d8c: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x489d8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489d90: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x489d90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7C5B14u));
    // 0x489d94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x489d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x489d98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x489d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x489d9c: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x489d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x489da0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x489da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x489da4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x489da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x489da8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x489da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x489dac: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x489dacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489db0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x489db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x489db4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x489db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x489db8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x489db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x489dbc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x489dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x489dc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x489dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x489dc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x489dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x489dc8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x489dc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x489dcc: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x489dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x489dd0: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x489DD0u;
    SET_GPR_U32(ctx, 31, 0x489DD8u);
    ctx->pc = 0x489DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489DD0u;
    // 0x489dd4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x489DD0u, 0x489DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489DD8u;
label_489dd8:
    // 0x489dd8: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x489dd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489ddc: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x489ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x489de0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x489de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489de4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x489de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x489de8: 0x24845b1c  addiu       $a0, $a0, 0x5B1C
    ctx->pc = 0x489de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23324));
    // 0x489dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x489decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x489df0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x489df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489df4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x489df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x489df8: 0x34634200  ori         $v1, $v1, 0x4200
    ctx->pc = 0x489df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16896);
    // 0x489dfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x489dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x489e00: 0x24424200  addiu       $v0, $v0, 0x4200
    ctx->pc = 0x489e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16896));
    // 0x489e04: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x489e04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x489e08: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x489e08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x489e0c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x489e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_489e10:
    // 0x489e10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x489e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489e14: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x489e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x489e18: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x489e18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x489e1c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x489e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x489e20: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x489e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x489e24: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x489e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x489e28: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x489e28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x489e2c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x489e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x489e30: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x489e30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x489e34: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x489e34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x489e38: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x489e38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x489e3c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x489e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x489e40: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x489e40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x489e44: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x489e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x489e48: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x489e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x489e4c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x489e4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x489e50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x489e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x489e54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x489e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x489e58: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x489e58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x489e5c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x489e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x489e60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x489e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x489e64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x489e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x489e68: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x489e68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x489e6c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x489e6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x489e70: 0x4420003  bltzl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x489E70u;
    {
        const bool branch_taken_0x489e70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x489e70) {
            ctx->pc = 0x489E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489E70u;
            // 0x489e74: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x489E80u;
            goto label_489e80;
        }
    }
    ctx->pc = 0x489E78u;
    // 0x489e78: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x489E78u;
    {
        const bool branch_taken_0x489e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x489E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489E78u;
        // 0x489e7c: 0xae470000  sw          $a3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489e78) {
            ctx->pc = 0x489E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489e10;
        }
    }
    ctx->pc = 0x489E80u;
label_489e80:
    // 0x489e80: 0x26d05b00  addiu       $s0, $s6, 0x5B00
    ctx->pc = 0x489e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 23296));
    // 0x489e84: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x489e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x489e88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x489e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x489e8c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x489e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x489e90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x489e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x489e94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x489e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x489e98: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x489e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489e9c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x489e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x489ea0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x489ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x489ea4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x489ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x489ea8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x489ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x489eac: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x489eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x489eb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x489eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x489eb4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x489eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x489eb8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x489eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x489ebc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x489ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x489ec0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x489ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x489ec4: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x489EC4u;
    SET_GPR_U32(ctx, 31, 0x489ECCu);
    ctx->pc = 0x489EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489EC4u;
    // 0x489ec8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x489EC4u, 0x489ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489ECCu;
label_489ecc:
    // 0x489ecc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x489eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489ed0: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x489ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x489ed4: 0x3c05007c  lui         $a1, 0x7C
    ctx->pc = 0x489ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)124 << 16));
    // 0x489ed8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x489ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x489edc: 0x3c07007c  lui         $a3, 0x7C
    ctx->pc = 0x489edcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)124 << 16));
    // 0x489ee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x489ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x489ee4: 0x3c06007c  lui         $a2, 0x7C
    ctx->pc = 0x489ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)124 << 16));
    // 0x489ee8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x489ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x489eec: 0x34634200  ori         $v1, $v1, 0x4200
    ctx->pc = 0x489eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16896);
    // 0x489ef0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x489ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x489ef4: 0x24424200  addiu       $v0, $v0, 0x4200
    ctx->pc = 0x489ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16896));
    // 0x489ef8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x489ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x489efc: 0x24915b18  addiu       $s1, $a0, 0x5B18
    ctx->pc = 0x489efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 23320));
    // 0x489f00: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x489f00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x489f04: 0x24b05b14  addiu       $s0, $a1, 0x5B14
    ctx->pc = 0x489f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 23316));
    // 0x489f08: 0x24e75b1c  addiu       $a3, $a3, 0x5B1C
    ctx->pc = 0x489f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23324));
    // 0x489f0c: 0x24c65b08  addiu       $a2, $a2, 0x5B08
    ctx->pc = 0x489f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23304));
    // 0x489f10: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x489f10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x489f14: 0x0  nop
    ctx->pc = 0x489f14u;
    // NOP
label_489f18:
    // 0x489f18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x489f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489f1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x489f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489f20: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x489f20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x489f24: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x489f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x489f28: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x489f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x489f2c: 0x24680004  addiu       $t0, $v1, 0x4
    ctx->pc = 0x489f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x489f30: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x489f30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x489f34: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x489f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x489f38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x489f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x489f3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x489f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x489f40: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x489f40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x489f44: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x489f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x489f48: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x489f48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x489f4c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x489f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x489f50: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x489f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x489f54: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x489f54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x489f58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x489f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x489f5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x489f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x489f60: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x489f60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x489f64: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x489f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x489f68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x489f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x489f6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x489f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x489f70: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x489f70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x489f74: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x489f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x489f78: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x489F78u;
    {
        const bool branch_taken_0x489f78 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x489f78) {
            ctx->pc = 0x489F88u;
            goto label_489f88;
        }
    }
    ctx->pc = 0x489F80u;
    // 0x489f80: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x489F80u;
    {
        const bool branch_taken_0x489f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x489F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489F80u;
        // 0x489f84: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489f80) {
            ctx->pc = 0x489F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489f18;
        }
    }
    ctx->pc = 0x489F88u;
label_489f88:
    // 0x489f88: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x489F88u;
    SET_GPR_U32(ctx, 31, 0x489F90u);
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x489F88u, 0x489F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489F90u;
label_489f90:
    // 0x489f90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x489f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489f94: 0x24424200  addiu       $v0, $v0, 0x4200
    ctx->pc = 0x489f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16896));
    // 0x489f98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x489f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489f9c: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x489f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x489fa0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x489fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x489fa4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x489fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x489fa8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x489fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x489fac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x489facu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x489fb0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x489fb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x489fb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x489fb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x489fb8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x489fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x489fbc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x489fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x489fc0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x489fc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x489fc4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x489fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489fc8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x489fc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x489fcc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x489fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x489fd0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x489fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x489fd4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x489fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x489fd8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x489fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x489fdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x489fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x489fe0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x489fe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x489fe4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x489fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x489fe8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x489fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x489fec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x489fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489ff0: 0x81226b8  j           func_489AE0
    ctx->pc = 0x489FF0u;
    ctx->pc = 0x489FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489FF0u;
    // 0x489ff4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489AE0u;
    sub_00489AE0_0x489ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x489FF8u;
}
