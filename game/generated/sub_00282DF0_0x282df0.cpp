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

// Function: sub_00282DF0
// Address: 0x282df0 - 0x282f08
void sub_00282DF0_0x282df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282DF0_0x282df0");
#endif

    switch (ctx->pc) {
        case 0x282e34u: goto label_282e34;
        case 0x282eecu: goto label_282eec;
        default: break;
    }

    ctx->pc = 0x282df0u;

    // 0x282df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282df4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x282df4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282df8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x282e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x282e04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x282e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x282e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x282e0c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x282e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x282e10: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x282e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x282e14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282E14u;
    {
        const bool branch_taken_0x282e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E14u;
        // 0x282e18: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e14) {
            ctx->pc = 0x282E24u;
            goto label_282e24;
        }
    }
    ctx->pc = 0x282E1Cu;
    // 0x282e1c: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x282e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x282e20: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x282e20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_282e24:
    // 0x282e24: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x282E24u;
    {
        const bool branch_taken_0x282e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282e24) {
            ctx->pc = 0x282E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282E24u;
            // 0x282e28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282EF0u;
            goto label_282ef0;
        }
    }
    ctx->pc = 0x282E2Cu;
    // 0x282e2c: 0xc09d940  jal         func_276500
    ctx->pc = 0x282E2Cu;
    SET_GPR_U32(ctx, 31, 0x282E34u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x282E2Cu, 0x282E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E34u;
label_282e34:
    // 0x282e34: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x282E34u;
    {
        const bool branch_taken_0x282e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282e34) {
            ctx->pc = 0x282E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282E34u;
            // 0x282e38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282EF0u;
            goto label_282ef0;
        }
    }
    ctx->pc = 0x282E3Cu;
    // 0x282e3c: 0x9603003c  lhu         $v1, 0x3C($s0)
    ctx->pc = 0x282e3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x282e40: 0x8f84ca8c  lw          $a0, -0x3574($gp)
    ctx->pc = 0x282e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953612)));
    // 0x282e44: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x282e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x282e48: 0x96250044  lhu         $a1, 0x44($s1)
    ctx->pc = 0x282e48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x282e4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282e50: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x282e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x282e54: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x282E54u;
    {
        const bool branch_taken_0x282e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E54u;
        // 0x282e58: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e54) {
            ctx->pc = 0x282E74u;
            goto label_282e74;
        }
    }
    ctx->pc = 0x282E5Cu;
    // 0x282e5c: 0x8ce2014c  lw          $v0, 0x14C($a3)
    ctx->pc = 0x282e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x282e60: 0x2c43ffff  sltiu       $v1, $v0, -0x1
    ctx->pc = 0x282e60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x282e64: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x282e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282e68: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x282e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x282e6c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x282e6cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x282e70: 0xace2014c  sw          $v0, 0x14C($a3)
    ctx->pc = 0x282e70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 332), GPR_U32(ctx, 2));
label_282e74:
    // 0x282e74: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x282E74u;
    {
        const bool branch_taken_0x282e74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x282e74) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282E7Cu;
    // 0x282e7c: 0x96420044  lhu         $v0, 0x44($s2)
    ctx->pc = 0x282e7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x282e80: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x282E80u;
    {
        const bool branch_taken_0x282e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282e80) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282E88u;
    // 0x282e88: 0x9202018a  lbu         $v0, 0x18A($s0)
    ctx->pc = 0x282e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 394)));
    // 0x282e8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x282E8Cu;
    {
        const bool branch_taken_0x282e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E8Cu;
        // 0x282e90: 0x92040184  lbu         $a0, 0x184($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e8c) {
            ctx->pc = 0x282EC0u;
            goto label_282ec0;
        }
    }
    ctx->pc = 0x282E94u;
    // 0x282e94: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x282e94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x282e98: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x282e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x282e9c: 0x248400e4  addiu       $a0, $a0, 0xE4
    ctx->pc = 0x282e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 228));
    // 0x282ea0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x282ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282ea4: 0x2c62ffff  sltiu       $v0, $v1, -0x1
    ctx->pc = 0x282ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x282ea8: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x282ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x282eac: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x282eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x282eb0: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x282eb0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x282eb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x282EB4u;
    {
        const bool branch_taken_0x282eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282EB4u;
        // 0x282eb8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282eb4) {
            ctx->pc = 0x282EC4u;
            goto label_282ec4;
        }
    }
    ctx->pc = 0x282EBCu;
    // 0x282ebc: 0x0  nop
    ctx->pc = 0x282ebcu;
    // NOP
label_282ec0:
    // 0x282ec0: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x282ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_282ec4:
    // 0x282ec4: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x282ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x282ec8: 0x24840118  addiu       $a0, $a0, 0x118
    ctx->pc = 0x282ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x282ecc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x282eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282ed0: 0x2c62ffff  sltiu       $v0, $v1, -0x1
    ctx->pc = 0x282ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x282ed4: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x282ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x282ed8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x282ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x282edc: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x282edcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x282ee0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x282ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_282ee4:
    // 0x282ee4: 0xc0a0bfc  jal         func_282FF0
    ctx->pc = 0x282EE4u;
    SET_GPR_U32(ctx, 31, 0x282EECu);
    ctx->pc = 0x282EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282EE4u;
    // 0x282ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282FF0u, 0x282EE4u, 0x282EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282EECu;
label_282eec:
    // 0x282eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_282ef0:
    // 0x282ef0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x282ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282ef4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x282ef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282ef8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x282ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282efc: 0x3e00008  jr          $ra
    ctx->pc = 0x282EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282EFCu;
        // 0x282f00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282F04u;
    // 0x282f04: 0x0  nop
    ctx->pc = 0x282f04u;
    // NOP
    ctx->pc = 0x282f08u;
}
