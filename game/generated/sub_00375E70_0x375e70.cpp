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

// Function: sub_00375E70
// Address: 0x375e70 - 0x375ff0
void sub_00375E70_0x375e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375E70_0x375e70");
#endif

    switch (ctx->pc) {
        case 0x375ef0u: goto label_375ef0;
        case 0x375f88u: goto label_375f88;
        default: break;
    }

    ctx->pc = 0x375e70u;

    // 0x375e70: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375e74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375e78: 0x244222a0  addiu       $v0, $v0, 0x22A0
    ctx->pc = 0x375e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8864));
    // 0x375e7c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x375e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x375e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375e84: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x375E84u;
    {
        const bool branch_taken_0x375e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E84u;
        // 0x375e88: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e84) {
            ctx->pc = 0x375E98u;
            goto label_375e98;
        }
    }
    ctx->pc = 0x375E8Cu;
    // 0x375e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375e90: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375E90u;
    ctx->pc = 0x375E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E90u;
    // 0x375e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375E98u;
label_375e98:
    // 0x375e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x375E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E9Cu;
        // 0x375ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375EA4u;
    // 0x375ea4: 0x0  nop
    ctx->pc = 0x375ea4u;
    // NOP
    // 0x375ea8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x375ea8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375eac: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x375eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x375eb0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375eb4: 0x25060004  addiu       $a2, $t0, 0x4
    ctx->pc = 0x375eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x375eb8: 0x25030018  addiu       $v1, $t0, 0x18
    ctx->pc = 0x375eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x375ebc: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x375ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x375ec0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x375ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x375ec4: 0x25090030  addiu       $t1, $t0, 0x30
    ctx->pc = 0x375ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x375ec8: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x375ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x375ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x375eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ed0: 0xacc60000  sw          $a2, 0x0($a2)
    ctx->pc = 0x375ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
    // 0x375ed4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x375ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ed8: 0xacc60004  sw          $a2, 0x4($a2)
    ctx->pc = 0x375ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 6));
    // 0x375edc: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x375edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x375ee0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x375ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x375ee4: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x375ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x375ee8: 0xacc40028  sw          $a0, 0x28($a2)
    ctx->pc = 0x375ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
    // 0x375eec: 0x0  nop
    ctx->pc = 0x375eecu;
    // NOP
label_375ef0:
    // 0x375ef0: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x375ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x375ef4: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x375ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x375ef8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x375ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x375efc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x375efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x375f00: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x375f00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x375f04: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x375f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x375f08: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x375f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x375f0c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x375F0Cu;
    {
        const bool branch_taken_0x375f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F0Cu;
        // 0x375f10: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375f0c) {
            ctx->pc = 0x375EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375ef0;
        }
    }
    ctx->pc = 0x375F14u;
    // 0x375f14: 0x24c20014  addiu       $v0, $a2, 0x14
    ctx->pc = 0x375f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x375f18: 0x25070130  addiu       $a3, $t0, 0x130
    ctx->pc = 0x375f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 304));
    // 0x375f1c: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x375f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x375f20: 0x25040144  addiu       $a0, $t0, 0x144
    ctx->pc = 0x375f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 324));
    // 0x375f24: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x375f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x375f28: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x375f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x375f2c: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x375f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x375f30: 0x250b015c  addiu       $t3, $t0, 0x15C
    ctx->pc = 0x375f30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 348));
    // 0x375f34: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x375f34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x375f38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x375f38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f3c: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x375f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x375f40: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x375f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f44: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x375f44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x375f48: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x375f48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x375f4c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x375f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x375f50: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x375f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x375f54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x375f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x375f58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x375f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x375f5c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x375f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x375f60: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x375f60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x375f64: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x375f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x375f68: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x375f68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x375f6c: 0xace70000  sw          $a3, 0x0($a3)
    ctx->pc = 0x375f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 7));
    // 0x375f70: 0xace70004  sw          $a3, 0x4($a3)
    ctx->pc = 0x375f70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 7));
    // 0x375f74: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x375f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
    // 0x375f78: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x375f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x375f7c: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x375f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x375f80: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x375f80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x375f84: 0x0  nop
    ctx->pc = 0x375f84u;
    // NOP
label_375f88:
    // 0x375f88: 0x2502fff0  addiu       $v0, $t0, -0x10
    ctx->pc = 0x375f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x375f8c: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x375f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x375f90: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x375f90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x375f94: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x375f94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x375f98: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x375f98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x375f9c: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x375f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x375fa0: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x375fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x375fa4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x375FA4u;
    {
        const bool branch_taken_0x375fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375FA4u;
        // 0x375fa8: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375fa4) {
            ctx->pc = 0x375F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375f88;
        }
    }
    ctx->pc = 0x375FACu;
    // 0x375fac: 0x24e20014  addiu       $v0, $a3, 0x14
    ctx->pc = 0x375facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x375fb0: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x375fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x375fb4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x375fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x375fb8: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x375fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x375fbc: 0xaceb0004  sw          $t3, 0x4($a3)
    ctx->pc = 0x375fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 11));
    // 0x375fc0: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x375fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x375fc4: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x375fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x375fc8: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x375fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x375fcc: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x375fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x375fd0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x375fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x375fd4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x375fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x375fd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x375fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x375fdc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x375fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x375fe0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x375fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x375fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x375FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375FE4u;
        // 0x375fe8: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375FECu;
    // 0x375fec: 0x0  nop
    ctx->pc = 0x375fecu;
    // NOP
    ctx->pc = 0x375ff0u;
}
