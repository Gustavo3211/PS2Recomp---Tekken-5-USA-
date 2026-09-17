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

// Function: sub_002B6DE0
// Address: 0x2b6de0 - 0x2b7030
void sub_002B6DE0_0x2b6de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6DE0_0x2b6de0");
#endif

    switch (ctx->pc) {
        case 0x2b6e50u: goto label_2b6e50;
        case 0x2b6e78u: goto label_2b6e78;
        case 0x2b6e80u: goto label_2b6e80;
        case 0x2b6ee8u: goto label_2b6ee8;
        case 0x2b6f40u: goto label_2b6f40;
        case 0x2b6f58u: goto label_2b6f58;
        default: break;
    }

    ctx->pc = 0x2b6de0u;

    // 0x2b6de0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b6de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b6de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6dec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2b6decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2b6df0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2b6df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2b6df4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2b6df4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6df8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b6df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b6dfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b6dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b6e00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b6e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b6e04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b6e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b6e08: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2b6e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2b6e0c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b6e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b6e10: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2b6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2b6e14: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2b6e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b6e18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b6e1c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b6e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b6e20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6E20u;
    {
        const bool branch_taken_0x2b6e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E20u;
        // 0x2b6e24: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e20) {
            ctx->pc = 0x2B6E38u;
            goto label_2b6e38;
        }
    }
    ctx->pc = 0x2B6E28u;
    // 0x2b6e28: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2b6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b6e2c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b6e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b6e30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6E30u;
    {
        const bool branch_taken_0x2b6e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E30u;
        // 0x2b6e34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e30) {
            ctx->pc = 0x2B6E3Cu;
            goto label_2b6e3c;
        }
    }
    ctx->pc = 0x2B6E38u;
label_2b6e38:
    // 0x2b6e38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6e3c:
    // 0x2b6e3c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6E3Cu;
    {
        const bool branch_taken_0x2b6e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E3Cu;
        // 0x2b6e40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e3c) {
            ctx->pc = 0x2B6E60u;
            goto label_2b6e60;
        }
    }
    ctx->pc = 0x2B6E44u;
    // 0x2b6e44: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2B6E44u;
    {
        const bool branch_taken_0x2b6e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E44u;
        // 0x2b6e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e44) {
            ctx->pc = 0x2B7004u;
            goto label_2b7004;
        }
    }
    ctx->pc = 0x2B6E4Cu;
    // 0x2b6e4c: 0x0  nop
    ctx->pc = 0x2b6e4cu;
    // NOP
label_2b6e50:
    // 0x2b6e50: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b6e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2b6e54: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2B6E54u;
    {
        const bool branch_taken_0x2b6e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E54u;
        // 0x2b6e58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e54) {
            ctx->pc = 0x2B6FE4u;
            goto label_2b6fe4;
        }
    }
    ctx->pc = 0x2B6E5Cu;
    // 0x2b6e5c: 0x0  nop
    ctx->pc = 0x2b6e5cu;
    // NOP
label_2b6e60:
    // 0x2b6e60: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x2b6e60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b6e64: 0x2413000d  addiu       $s3, $zero, 0xD
    ctx->pc = 0x2b6e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b6e68: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x2b6e68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b6e6c: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x2b6e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b6e70: 0x2416002f  addiu       $s6, $zero, 0x2F
    ctx->pc = 0x2b6e70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2b6e74: 0x0  nop
    ctx->pc = 0x2b6e74u;
    // NOP
label_2b6e78:
    // 0x2b6e78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6E78u;
    {
        const bool branch_taken_0x2b6e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E78u;
        // 0x2b6e7c: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e78) {
            ctx->pc = 0x2B6E88u;
            goto label_2b6e88;
        }
    }
    ctx->pc = 0x2B6E80u;
label_2b6e80:
    // 0x2b6e80: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b6e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2b6e84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b6e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6e88:
    // 0x2b6e88: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6e8c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b6e8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6e90: 0x1054000a  beq         $v0, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6E90u;
    {
        const bool branch_taken_0x2b6e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2B6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E90u;
        // 0x2b6e94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e90) {
            ctx->pc = 0x2B6EBCu;
            goto label_2b6ebc;
        }
    }
    ctx->pc = 0x2B6E98u;
    // 0x2b6e98: 0x10530008  beq         $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6E98u;
    {
        const bool branch_taken_0x2b6e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2b6e98) {
            ctx->pc = 0x2B6EBCu;
            goto label_2b6ebc;
        }
    }
    ctx->pc = 0x2B6EA0u;
    // 0x2b6ea0: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6EA0u;
    {
        const bool branch_taken_0x2b6ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2b6ea0) {
            ctx->pc = 0x2B6EBCu;
            goto label_2b6ebc;
        }
    }
    ctx->pc = 0x2B6EA8u;
    // 0x2b6ea8: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6EA8u;
    {
        const bool branch_taken_0x2b6ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b6ea8) {
            ctx->pc = 0x2B6EBCu;
            goto label_2b6ebc;
        }
    }
    ctx->pc = 0x2B6EB0u;
    // 0x2b6eb0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6EB0u;
    {
        const bool branch_taken_0x2b6eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EB0u;
        // 0x2b6eb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6eb0) {
            ctx->pc = 0x2B6EBCu;
            goto label_2b6ebc;
        }
    }
    ctx->pc = 0x2B6EB8u;
    // 0x2b6eb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6ebc:
    // 0x2b6ebc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2B6EBCu;
    {
        const bool branch_taken_0x2b6ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EBCu;
        // 0x2b6ec0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ebc) {
            ctx->pc = 0x2B6E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6e80;
        }
    }
    ctx->pc = 0x2B6EC4u;
    // 0x2b6ec4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6ec8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2b6ec8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6ecc: 0x54760008  bnel        $v1, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6ECCu;
    {
        const bool branch_taken_0x2b6ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x2b6ecc) {
            ctx->pc = 0x2B6ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6ECCu;
            // 0x2b6ed0: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6EF0u;
            goto label_2b6ef0;
        }
    }
    ctx->pc = 0x2B6ED4u;
    // 0x2b6ed4: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x2b6ed4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2b6ed8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6ED8u;
    {
        const bool branch_taken_0x2b6ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b6ed8) {
            ctx->pc = 0x2B6EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6ED8u;
            // 0x2b6edc: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6EF0u;
            goto label_2b6ef0;
        }
    }
    ctx->pc = 0x2B6EE0u;
    // 0x2b6ee0: 0xc0adccc  jal         func_2B7330
    ctx->pc = 0x2B6EE0u;
    SET_GPR_U32(ctx, 31, 0x2B6EE8u);
    ctx->pc = 0x2B6EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6EE0u;
    // 0x2b6ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7330u, 0x2B6EE0u, 0x2B6EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6EE8u;
label_2b6ee8:
    // 0x2b6ee8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x2B6EE8u;
    {
        const bool branch_taken_0x2b6ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EE8u;
        // 0x2b6eec: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ee8) {
            ctx->pc = 0x2B6E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6e78;
        }
    }
    ctx->pc = 0x2B6EF0u;
label_2b6ef0:
    // 0x2b6ef0: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x2b6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2b6ef4: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x2b6ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b6ef8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2b6ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b6efc: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2b6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6f00: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2b6f00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6f04: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6F04u;
    {
        const bool branch_taken_0x2b6f04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F04u;
        // 0x2b6f08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f04) {
            ctx->pc = 0x2B6F1Cu;
            goto label_2b6f1c;
        }
    }
    ctx->pc = 0x2B6F0Cu;
    // 0x2b6f0c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2b6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b6f10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b6f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6f14: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b6f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2b6f18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b6f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f1c:
    // 0x2b6f1c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6f20: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x2b6f20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b6f24: 0x240c000d  addiu       $t4, $zero, 0xD
    ctx->pc = 0x2b6f24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b6f28: 0x240b0009  addiu       $t3, $zero, 0x9
    ctx->pc = 0x2b6f28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b6f2c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x2b6f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b6f30: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x2b6f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2b6f34: 0x2408007e  addiu       $t0, $zero, 0x7E
    ctx->pc = 0x2b6f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2b6f38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B6F38u;
    {
        const bool branch_taken_0x2b6f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F38u;
        // 0x2b6f3c: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f38) {
            ctx->pc = 0x2B6F9Cu;
            goto label_2b6f9c;
        }
    }
    ctx->pc = 0x2B6F40u;
label_2b6f40:
    // 0x2b6f40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b6f44: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2b6f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b6f48: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B6F48u;
    {
        const bool branch_taken_0x2b6f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F48u;
        // 0x2b6f4c: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f48) {
            ctx->pc = 0x2B6FE8u;
            goto label_2b6fe8;
        }
    }
    ctx->pc = 0x2B6F50u;
    // 0x2b6f50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6F50u;
    {
        const bool branch_taken_0x2b6f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F50u;
        // 0x2b6f54: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f50) {
            ctx->pc = 0x2B6F64u;
            goto label_2b6f64;
        }
    }
    ctx->pc = 0x2B6F58u;
label_2b6f58:
    // 0x2b6f58: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x2b6f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b6f5c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6f60: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2b6f60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b6f64:
    // 0x2b6f64: 0x14690004  bne         $v1, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6F64u;
    {
        const bool branch_taken_0x2b6f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x2b6f64) {
            ctx->pc = 0x2B6F78u;
            goto label_2b6f78;
        }
    }
    ctx->pc = 0x2B6F6Cu;
    // 0x2b6f6c: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x2b6f6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2b6f70: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B6F70u;
    {
        const bool branch_taken_0x2b6f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F70u;
        // 0x2b6f74: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f70) {
            ctx->pc = 0x2B6FE8u;
            goto label_2b6fe8;
        }
    }
    ctx->pc = 0x2B6F78u;
label_2b6f78:
    // 0x2b6f78: 0x14680004  bne         $v1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6F78u;
    {
        const bool branch_taken_0x2b6f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x2B6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F78u;
        // 0x2b6f7c: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f78) {
            ctx->pc = 0x2B6F8Cu;
            goto label_2b6f8c;
        }
    }
    ctx->pc = 0x2B6F80u;
    // 0x2b6f80: 0x14e0ffb3  bnez        $a3, . + 4 + (-0x4D << 2)
    ctx->pc = 0x2B6F80u;
    {
        const bool branch_taken_0x2b6f80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F80u;
        // 0x2b6f84: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f80) {
            ctx->pc = 0x2B6E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6e50;
        }
    }
    ctx->pc = 0x2B6F88u;
    // 0x2b6f88: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2b6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b6f8c:
    // 0x2b6f8c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2b6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2b6f90: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2b6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b6f94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b6f98: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2b6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2b6f9c:
    // 0x2b6f9c: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B6F9Cu;
    {
        const bool branch_taken_0x2b6f9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F9Cu;
        // 0x2b6fa0: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f9c) {
            ctx->pc = 0x2B6F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6f58;
        }
    }
    ctx->pc = 0x2B6FA4u;
    // 0x2b6fa4: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x2b6fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b6fa8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6fac: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b6facu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6fb0: 0x104d0009  beq         $v0, $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6FB0u;
    {
        const bool branch_taken_0x2b6fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FB0u;
        // 0x2b6fb4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fb0) {
            ctx->pc = 0x2B6FD8u;
            goto label_2b6fd8;
        }
    }
    ctx->pc = 0x2B6FB8u;
    // 0x2b6fb8: 0x104c0008  beq         $v0, $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6FB8u;
    {
        const bool branch_taken_0x2b6fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FB8u;
        // 0x2b6fbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fb8) {
            ctx->pc = 0x2B6FDCu;
            goto label_2b6fdc;
        }
    }
    ctx->pc = 0x2B6FC0u;
    // 0x2b6fc0: 0x104b0006  beq         $v0, $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6FC0u;
    {
        const bool branch_taken_0x2b6fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b6fc0) {
            ctx->pc = 0x2B6FDCu;
            goto label_2b6fdc;
        }
    }
    ctx->pc = 0x2B6FC8u;
    // 0x2b6fc8: 0x104a0004  beq         $v0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6FC8u;
    {
        const bool branch_taken_0x2b6fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b6fc8) {
            ctx->pc = 0x2B6FDCu;
            goto label_2b6fdc;
        }
    }
    ctx->pc = 0x2B6FD0u;
    // 0x2b6fd0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6FD0u;
    {
        const bool branch_taken_0x2b6fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FD0u;
        // 0x2b6fd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fd0) {
            ctx->pc = 0x2B6FDCu;
            goto label_2b6fdc;
        }
    }
    ctx->pc = 0x2B6FD8u;
label_2b6fd8:
    // 0x2b6fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6fdc:
    // 0x2b6fdc: 0x5060ffd8  beql        $v1, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2B6FDCu;
    {
        const bool branch_taken_0x2b6fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6fdc) {
            ctx->pc = 0x2B6FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6FDCu;
            // 0x2b6fe0: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6f40;
        }
    }
    ctx->pc = 0x2B6FE4u;
label_2b6fe4:
    // 0x2b6fe4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2b6fe8:
    // 0x2b6fe8: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6FE8u;
    {
        const bool branch_taken_0x2b6fe8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FE8u;
        // 0x2b6fec: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fe8) {
            ctx->pc = 0x2B6FFCu;
            goto label_2b6ffc;
        }
    }
    ctx->pc = 0x2B6FF0u;
    // 0x2b6ff0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b6ff4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b6ff8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2b6ffc:
    // 0x2b6ffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b6ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b7004:
    // 0x2b7004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b7004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7008: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b7008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b700c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b700cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7010: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b7010u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7014: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2b7014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b7018: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2b7018u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b701c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2b701cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b7020: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b7020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7024: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7024u;
        // 0x2b7028: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B702Cu;
    // 0x2b702c: 0x0  nop
    ctx->pc = 0x2b702cu;
    // NOP
    ctx->pc = 0x2b7030u;
}
