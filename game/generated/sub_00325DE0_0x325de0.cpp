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

// Function: sub_00325DE0
// Address: 0x325de0 - 0x326048
void sub_00325DE0_0x325de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325DE0_0x325de0");
#endif

    switch (ctx->pc) {
        case 0x325de0u: goto label_325de0;
        case 0x325de4u: goto label_325de4;
        case 0x325de8u: goto label_325de8;
        case 0x325decu: goto label_325dec;
        case 0x325df0u: goto label_325df0;
        case 0x325df4u: goto label_325df4;
        case 0x325df8u: goto label_325df8;
        case 0x325dfcu: goto label_325dfc;
        case 0x325e00u: goto label_325e00;
        case 0x325e04u: goto label_325e04;
        case 0x325e08u: goto label_325e08;
        case 0x325e0cu: goto label_325e0c;
        case 0x325e10u: goto label_325e10;
        case 0x325e14u: goto label_325e14;
        case 0x325e18u: goto label_325e18;
        case 0x325e1cu: goto label_325e1c;
        case 0x325e20u: goto label_325e20;
        case 0x325e24u: goto label_325e24;
        case 0x325e28u: goto label_325e28;
        case 0x325e2cu: goto label_325e2c;
        case 0x325e30u: goto label_325e30;
        case 0x325e34u: goto label_325e34;
        case 0x325e38u: goto label_325e38;
        case 0x325e3cu: goto label_325e3c;
        case 0x325e40u: goto label_325e40;
        case 0x325e44u: goto label_325e44;
        case 0x325e48u: goto label_325e48;
        case 0x325e4cu: goto label_325e4c;
        case 0x325e50u: goto label_325e50;
        case 0x325e54u: goto label_325e54;
        case 0x325e58u: goto label_325e58;
        case 0x325e5cu: goto label_325e5c;
        case 0x325e60u: goto label_325e60;
        case 0x325e64u: goto label_325e64;
        case 0x325e68u: goto label_325e68;
        case 0x325e6cu: goto label_325e6c;
        case 0x325e70u: goto label_325e70;
        case 0x325e74u: goto label_325e74;
        case 0x325e78u: goto label_325e78;
        case 0x325e7cu: goto label_325e7c;
        case 0x325e80u: goto label_325e80;
        case 0x325e84u: goto label_325e84;
        case 0x325e88u: goto label_325e88;
        case 0x325e8cu: goto label_325e8c;
        case 0x325e90u: goto label_325e90;
        case 0x325e94u: goto label_325e94;
        case 0x325e98u: goto label_325e98;
        case 0x325e9cu: goto label_325e9c;
        case 0x325ea0u: goto label_325ea0;
        case 0x325ea4u: goto label_325ea4;
        case 0x325ea8u: goto label_325ea8;
        case 0x325eacu: goto label_325eac;
        case 0x325eb0u: goto label_325eb0;
        case 0x325eb4u: goto label_325eb4;
        case 0x325eb8u: goto label_325eb8;
        case 0x325ebcu: goto label_325ebc;
        case 0x325ec0u: goto label_325ec0;
        case 0x325ec4u: goto label_325ec4;
        case 0x325ec8u: goto label_325ec8;
        case 0x325eccu: goto label_325ecc;
        case 0x325ed0u: goto label_325ed0;
        case 0x325ed4u: goto label_325ed4;
        case 0x325ed8u: goto label_325ed8;
        case 0x325edcu: goto label_325edc;
        case 0x325ee0u: goto label_325ee0;
        case 0x325ee4u: goto label_325ee4;
        case 0x325ee8u: goto label_325ee8;
        case 0x325eecu: goto label_325eec;
        case 0x325ef0u: goto label_325ef0;
        case 0x325ef4u: goto label_325ef4;
        case 0x325ef8u: goto label_325ef8;
        case 0x325efcu: goto label_325efc;
        case 0x325f00u: goto label_325f00;
        case 0x325f04u: goto label_325f04;
        case 0x325f08u: goto label_325f08;
        case 0x325f0cu: goto label_325f0c;
        case 0x325f10u: goto label_325f10;
        case 0x325f14u: goto label_325f14;
        case 0x325f18u: goto label_325f18;
        case 0x325f1cu: goto label_325f1c;
        case 0x325f20u: goto label_325f20;
        case 0x325f24u: goto label_325f24;
        case 0x325f28u: goto label_325f28;
        case 0x325f2cu: goto label_325f2c;
        case 0x325f30u: goto label_325f30;
        case 0x325f34u: goto label_325f34;
        case 0x325f38u: goto label_325f38;
        case 0x325f3cu: goto label_325f3c;
        case 0x325f40u: goto label_325f40;
        case 0x325f44u: goto label_325f44;
        case 0x325f48u: goto label_325f48;
        case 0x325f4cu: goto label_325f4c;
        case 0x325f50u: goto label_325f50;
        case 0x325f54u: goto label_325f54;
        case 0x325f58u: goto label_325f58;
        case 0x325f5cu: goto label_325f5c;
        case 0x325f60u: goto label_325f60;
        case 0x325f64u: goto label_325f64;
        case 0x325f68u: goto label_325f68;
        case 0x325f6cu: goto label_325f6c;
        case 0x325f70u: goto label_325f70;
        case 0x325f74u: goto label_325f74;
        case 0x325f78u: goto label_325f78;
        case 0x325f7cu: goto label_325f7c;
        case 0x325f80u: goto label_325f80;
        case 0x325f84u: goto label_325f84;
        case 0x325f88u: goto label_325f88;
        case 0x325f8cu: goto label_325f8c;
        case 0x325f90u: goto label_325f90;
        case 0x325f94u: goto label_325f94;
        case 0x325f98u: goto label_325f98;
        case 0x325f9cu: goto label_325f9c;
        case 0x325fa0u: goto label_325fa0;
        case 0x325fa4u: goto label_325fa4;
        case 0x325fa8u: goto label_325fa8;
        case 0x325facu: goto label_325fac;
        case 0x325fb0u: goto label_325fb0;
        case 0x325fb4u: goto label_325fb4;
        case 0x325fb8u: goto label_325fb8;
        case 0x325fbcu: goto label_325fbc;
        case 0x325fc0u: goto label_325fc0;
        case 0x325fc4u: goto label_325fc4;
        case 0x325fc8u: goto label_325fc8;
        case 0x325fccu: goto label_325fcc;
        case 0x325fd0u: goto label_325fd0;
        case 0x325fd4u: goto label_325fd4;
        case 0x325fd8u: goto label_325fd8;
        case 0x325fdcu: goto label_325fdc;
        case 0x325fe0u: goto label_325fe0;
        case 0x325fe4u: goto label_325fe4;
        case 0x325fe8u: goto label_325fe8;
        case 0x325fecu: goto label_325fec;
        case 0x325ff0u: goto label_325ff0;
        case 0x325ff4u: goto label_325ff4;
        case 0x325ff8u: goto label_325ff8;
        case 0x325ffcu: goto label_325ffc;
        case 0x326000u: goto label_326000;
        case 0x326004u: goto label_326004;
        case 0x326008u: goto label_326008;
        case 0x32600cu: goto label_32600c;
        case 0x326010u: goto label_326010;
        case 0x326014u: goto label_326014;
        case 0x326018u: goto label_326018;
        case 0x32601cu: goto label_32601c;
        case 0x326020u: goto label_326020;
        case 0x326024u: goto label_326024;
        case 0x326028u: goto label_326028;
        case 0x32602cu: goto label_32602c;
        case 0x326030u: goto label_326030;
        case 0x326034u: goto label_326034;
        case 0x326038u: goto label_326038;
        case 0x32603cu: goto label_32603c;
        case 0x326040u: goto label_326040;
        case 0x326044u: goto label_326044;
        default: break;
    }

    ctx->pc = 0x325de0u;

label_325de0:
    // 0x325de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_325de4:
    // 0x325de4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x325de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_325de8:
    // 0x325de8: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x325de8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_325dec:
    // 0x325dec: 0x268203c0  addiu       $v0, $s4, 0x3C0
    ctx->pc = 0x325decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
label_325df0:
    // 0x325df0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x325df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_325df4:
    // 0x325df4: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x325df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_325df8:
    // 0x325df8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x325df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_325dfc:
    // 0x325dfc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x325dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_325e00:
    // 0x325e00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x325e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_325e04:
    // 0x325e04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x325e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_325e08:
    // 0x325e08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x325e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_325e0c:
    // 0x325e0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x325e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_325e10:
    // 0x325e10: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x325e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_325e14:
    // 0x325e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x325e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325e18:
    // 0x325e18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x325e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_325e1c:
    // 0x325e1c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x325e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_325e20:
    // 0x325e20: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_325e24:
    if (ctx->pc == 0x325E24u) {
        ctx->pc = 0x325E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E20u;
        // 0x325e24: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325E28u;
        goto label_325e28;
    }
    ctx->pc = 0x325E20u;
    {
        const bool branch_taken_0x325e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E20u;
        // 0x325e24: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e20) {
            ctx->pc = 0x325FB0u;
            goto label_325fb0;
        }
    }
    ctx->pc = 0x325E28u;
label_325e28:
    // 0x325e28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x325e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_325e2c:
    // 0x325e2c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x325e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_325e30:
    // 0x325e30: 0x0  nop
    ctx->pc = 0x325e30u;
    // NOP
label_325e34:
    // 0x325e34: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_325e38:
    if (ctx->pc == 0x325E38u) {
        ctx->pc = 0x325E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E34u;
        // 0x325e38: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325E3Cu;
        goto label_325e3c;
    }
    ctx->pc = 0x325E34u;
    {
        const bool branch_taken_0x325e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E34u;
        // 0x325e38: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e34) {
            ctx->pc = 0x325E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325e18;
        }
    }
    ctx->pc = 0x325E3Cu;
label_325e3c:
    // 0x325e3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325e40:
    // 0x325e40: 0x269303c0  addiu       $s3, $s4, 0x3C0
    ctx->pc = 0x325e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
label_325e44:
    // 0x325e44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x325e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_325e48:
    // 0x325e48: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x325e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_325e4c:
    // 0x325e4c: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x325e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_325e50:
    // 0x325e50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x325e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_325e54:
    // 0x325e54: 0xc0c8864  jal         func_322190
label_325e58:
    if (ctx->pc == 0x325E58u) {
        ctx->pc = 0x325E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E54u;
        // 0x325e58: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325E5Cu;
        goto label_325e5c;
    }
    ctx->pc = 0x325E54u;
    SET_GPR_U32(ctx, 31, 0x325E5Cu);
    ctx->pc = 0x325E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E54u;
    // 0x325e58: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x325E54u, 0x325E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E5Cu;
label_325e5c:
    // 0x325e5c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x325e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_325e60:
    // 0x325e60: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x325e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_325e64:
    // 0x325e64: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x325e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_325e68:
    // 0x325e68: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x325e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_325e6c:
    // 0x325e6c: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x325e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_325e70:
    // 0x325e70: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x325e70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_325e74:
    // 0x325e74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x325e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_325e78:
    // 0x325e78: 0x40f809  jalr        $v0
label_325e7c:
    if (ctx->pc == 0x325E7Cu) {
        ctx->pc = 0x325E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E78u;
        // 0x325e7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325E80u;
        goto label_325e80;
    }
    ctx->pc = 0x325E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x325E80u);
        ctx->pc = 0x325E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E78u;
        // 0x325e7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325E78u, 0x325E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x325E80u;
label_325e80:
    // 0x325e80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_325e84:
    // 0x325e84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x325e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_325e88:
    // 0x325e88: 0xc0c9860  jal         func_326180
label_325e8c:
    if (ctx->pc == 0x325E8Cu) {
        ctx->pc = 0x325E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E88u;
        // 0x325e8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325E90u;
        goto label_325e90;
    }
    ctx->pc = 0x325E88u;
    SET_GPR_U32(ctx, 31, 0x325E90u);
    ctx->pc = 0x325E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E88u;
    // 0x325e8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326180u, 0x325E88u, 0x325E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E90u;
label_325e90:
    // 0x325e90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x325e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_325e94:
    // 0x325e94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x325e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_325e98:
    // 0x325e98: 0xc0c9812  jal         func_326048
label_325e9c:
    if (ctx->pc == 0x325E9Cu) {
        ctx->pc = 0x325E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E98u;
        // 0x325e9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325EA0u;
        goto label_325ea0;
    }
    ctx->pc = 0x325E98u;
    SET_GPR_U32(ctx, 31, 0x325EA0u);
    ctx->pc = 0x325E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E98u;
    // 0x325e9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326048u, 0x325E98u, 0x325EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325EA0u;
label_325ea0:
    // 0x325ea0: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x325ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_325ea4:
    // 0x325ea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x325ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_325ea8:
    // 0x325ea8: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x325ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_325eac:
    // 0x325eac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_325eb0:
    if (ctx->pc == 0x325EB0u) {
        ctx->pc = 0x325EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325EACu;
        // 0x325eb0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325EB4u;
        goto label_325eb4;
    }
    ctx->pc = 0x325EACu;
    {
        const bool branch_taken_0x325eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325EACu;
        // 0x325eb0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325eac) {
            ctx->pc = 0x325EF4u;
            goto label_325ef4;
        }
    }
    ctx->pc = 0x325EB4u;
label_325eb4:
    // 0x325eb4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x325eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_325eb8:
    // 0x325eb8: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x325eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
label_325ebc:
    // 0x325ebc: 0x24850068  addiu       $a1, $a0, 0x68
    ctx->pc = 0x325ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
label_325ec0:
    // 0x325ec0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x325ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_325ec4:
    // 0x325ec4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x325ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_325ec8:
    // 0x325ec8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x325ec8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_325ecc:
    // 0x325ecc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x325eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_325ed0:
    // 0x325ed0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x325ed0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_325ed4:
    // 0x325ed4: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x325ed4u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_325ed8:
    // 0x325ed8: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x325ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
label_325edc:
    // 0x325edc: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x325edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_325ee0:
    // 0x325ee0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x325ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_325ee4:
    // 0x325ee4: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x325ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
label_325ee8:
    // 0x325ee8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x325ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_325eec:
    // 0x325eec: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x325eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_325ef0:
    // 0x325ef0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x325ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_325ef4:
    // 0x325ef4: 0xc0d0b30  jal         func_342CC0
label_325ef8:
    if (ctx->pc == 0x325EF8u) {
        ctx->pc = 0x325EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325EF4u;
        // 0x325ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325EFCu;
        goto label_325efc;
    }
    ctx->pc = 0x325EF4u;
    SET_GPR_U32(ctx, 31, 0x325EFCu);
    ctx->pc = 0x325EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325EF4u;
    // 0x325ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CC0u, 0x325EF4u, 0x325EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325EFCu;
label_325efc:
    // 0x325efc: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x325efcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_325f00:
    // 0x325f00: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x325f00u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_325f04:
    // 0x325f04: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_325f08:
    if (ctx->pc == 0x325F08u) {
        ctx->pc = 0x325F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F04u;
        // 0x325f08: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325F0Cu;
        goto label_325f0c;
    }
    ctx->pc = 0x325F04u;
    {
        const bool branch_taken_0x325f04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F04u;
        // 0x325f08: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f04) {
            ctx->pc = 0x325F94u;
            goto label_325f94;
        }
    }
    ctx->pc = 0x325F0Cu;
label_325f0c:
    // 0x325f0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x325f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_325f10:
    // 0x325f10: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x325f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_325f14:
    // 0x325f14: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x325f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_325f18:
    // 0x325f18: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x325f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_325f1c:
    // 0x325f1c: 0xc0ce218  jal         func_338860
label_325f20:
    if (ctx->pc == 0x325F20u) {
        ctx->pc = 0x325F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F1Cu;
        // 0x325f20: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325F24u;
        goto label_325f24;
    }
    ctx->pc = 0x325F1Cu;
    SET_GPR_U32(ctx, 31, 0x325F24u);
    ctx->pc = 0x325F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F1Cu;
    // 0x325f20: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x325F1Cu, 0x325F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F24u;
label_325f24:
    // 0x325f24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x325f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_325f28:
    // 0x325f28: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x325f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
label_325f2c:
    // 0x325f2c: 0x112902  srl         $a1, $s1, 4
    ctx->pc = 0x325f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
label_325f30:
    // 0x325f30: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x325f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_325f34:
    // 0x325f34: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x325f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_325f38:
    // 0x325f38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x325f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_325f3c:
    // 0x325f3c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x325f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_325f40:
    // 0x325f40: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x325f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
label_325f44:
    // 0x325f44: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x325f44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_325f48:
    // 0x325f48: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x325f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_325f4c:
    // 0x325f4c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x325f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_325f50:
    // 0x325f50: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x325f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_325f54:
    // 0x325f54: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x325f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
label_325f58:
    // 0x325f58: 0x32423fff  andi        $v0, $s2, 0x3FFF
    ctx->pc = 0x325f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16383);
label_325f5c:
    // 0x325f5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x325f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_325f60:
    // 0x325f60: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x325f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_325f64:
    // 0x325f64: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x325f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_325f68:
    // 0x325f68: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x325f68u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2)); // MMIO: 0x1000d080
label_325f6c:
    // 0x325f6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x325f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_325f70:
    // 0x325f70: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x325f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
label_325f74:
    // 0x325f74: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x325f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
label_325f78:
    // 0x325f78: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x325f78u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x1000d080
label_325f7c:
    // 0x325f7c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x325f7cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000e010
label_325f80:
    // 0x325f80: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x325f80u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000e010
label_325f84:
    // 0x325f84: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x325f84u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000d000
label_325f88:
    // 0x325f88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x325f88u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
label_325f8c:
    // 0x325f8c: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x325f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
label_325f90:
    // 0x325f90: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x325f90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_325f94:
    // 0x325f94: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x325f94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_325f98:
    // 0x325f98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x325f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_325f9c:
    // 0x325f9c: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
label_325fa0:
    if (ctx->pc == 0x325FA0u) {
        ctx->pc = 0x325FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F9Cu;
        // 0x325fa0: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325FA4u;
        goto label_325fa4;
    }
    ctx->pc = 0x325F9Cu;
    {
        const bool branch_taken_0x325f9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x325FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F9Cu;
        // 0x325fa0: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f9c) {
            ctx->pc = 0x325FD0u;
            goto label_325fd0;
        }
    }
    ctx->pc = 0x325FA4u;
label_325fa4:
    // 0x325fa4: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x325fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_325fa8:
    // 0x325fa8: 0x10000018  b           . + 4 + (0x18 << 2)
label_325fac:
    if (ctx->pc == 0x325FACu) {
        ctx->pc = 0x325FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FA8u;
        // 0x325fac: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325FB0u;
        goto label_325fb0;
    }
    ctx->pc = 0x325FA8u;
    {
        const bool branch_taken_0x325fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FA8u;
        // 0x325fac: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325fa8) {
            ctx->pc = 0x32600Cu;
            goto label_32600c;
        }
    }
    ctx->pc = 0x325FB0u;
label_325fb0:
    // 0x325fb0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x325fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_325fb4:
    // 0x325fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x325fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325fb8:
    // 0x325fb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x325fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_325fbc:
    // 0x325fbc: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x325fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_325fc0:
    // 0x325fc0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x325fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_325fc4:
    // 0x325fc4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x325fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_325fc8:
    // 0x325fc8: 0x1000ff9d  b           . + 4 + (-0x63 << 2)
label_325fcc:
    if (ctx->pc == 0x325FCCu) {
        ctx->pc = 0x325FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FC8u;
        // 0x325fcc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325FD0u;
        goto label_325fd0;
    }
    ctx->pc = 0x325FC8u;
    {
        const bool branch_taken_0x325fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FC8u;
        // 0x325fcc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325fc8) {
            ctx->pc = 0x325E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325e40;
        }
    }
    ctx->pc = 0x325FD0u;
label_325fd0:
    // 0x325fd0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x325fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
label_325fd4:
    // 0x325fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325fd8:
    // 0x325fd8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x325fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_325fdc:
    // 0x325fdc: 0x0  nop
    ctx->pc = 0x325fdcu;
    // NOP
label_325fe0:
    // 0x325fe0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x325fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_325fe4:
    // 0x325fe4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_325fe8:
    if (ctx->pc == 0x325FE8u) {
        ctx->pc = 0x325FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FE4u;
        // 0x325fe8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325FECu;
        goto label_325fec;
    }
    ctx->pc = 0x325FE4u;
    {
        const bool branch_taken_0x325fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FE4u;
        // 0x325fe8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325fe4) {
            ctx->pc = 0x325FF4u;
            goto label_325ff4;
        }
    }
    ctx->pc = 0x325FECu;
label_325fec:
    // 0x325fec: 0x50d20007  beql        $a2, $s2, . + 4 + (0x7 << 2)
label_325ff0:
    if (ctx->pc == 0x325FF0u) {
        ctx->pc = 0x325FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FECu;
        // 0x325ff0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325FF4u;
        goto label_325ff4;
    }
    ctx->pc = 0x325FECu;
    {
        const bool branch_taken_0x325fec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        if (branch_taken_0x325fec) {
            ctx->pc = 0x325FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325FECu;
            // 0x325ff0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32600Cu;
            goto label_32600c;
        }
    }
    ctx->pc = 0x325FF4u;
label_325ff4:
    // 0x325ff4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x325ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_325ff8:
    // 0x325ff8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x325ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_325ffc:
    // 0x325ffc: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x325ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_326000:
    // 0x326000: 0x0  nop
    ctx->pc = 0x326000u;
    // NOP
label_326004:
    // 0x326004: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_326008:
    if (ctx->pc == 0x326008u) {
        ctx->pc = 0x326008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326004u;
        // 0x326008: 0x24c60c00  addiu       $a2, $a2, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32600Cu;
        goto label_32600c;
    }
    ctx->pc = 0x326004u;
    {
        const bool branch_taken_0x326004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326004u;
        // 0x326008: 0x24c60c00  addiu       $a2, $a2, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326004) {
            ctx->pc = 0x325FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325fe0;
        }
    }
    ctx->pc = 0x32600Cu;
label_32600c:
    // 0x32600c: 0x268403c0  addiu       $a0, $s4, 0x3C0
    ctx->pc = 0x32600cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
label_326010:
    // 0x326010: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x326010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326014:
    // 0x326014: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_326018:
    // 0x326018: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_32601c:
    if (ctx->pc == 0x32601Cu) {
        ctx->pc = 0x32601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326018u;
        // 0x32601c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326020u;
        goto label_326020;
    }
    ctx->pc = 0x326018u;
    {
        const bool branch_taken_0x326018 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x32601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326018u;
        // 0x32601c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326018) {
            ctx->pc = 0x326028u;
            goto label_326028;
        }
    }
    ctx->pc = 0x326020u;
label_326020:
    // 0x326020: 0xc0ce218  jal         func_338860
label_326024:
    if (ctx->pc == 0x326024u) {
        ctx->pc = 0x326028u;
        goto label_326028;
    }
    ctx->pc = 0x326020u;
    SET_GPR_U32(ctx, 31, 0x326028u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x326020u, 0x326028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326028u;
label_326028:
    // 0x326028: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x326028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32602c:
    // 0x32602c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32602cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_326030:
    // 0x326030: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x326030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_326034:
    // 0x326034: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x326034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_326038:
    // 0x326038: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x326038u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32603c:
    // 0x32603c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x32603cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_326040:
    // 0x326040: 0x3e00008  jr          $ra
label_326044:
    if (ctx->pc == 0x326044u) {
        ctx->pc = 0x326044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326040u;
        // 0x326044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326048u;
        goto label_fallthrough_0x326040;
    }
    ctx->pc = 0x326040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326040u;
        // 0x326044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x326040:
    ctx->pc = 0x326048u;
}
