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

// Function: sub_00110D78
// Address: 0x110d78 - 0x110f50
void sub_00110D78_0x110d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110D78_0x110d78");
#endif

    switch (ctx->pc) {
        case 0x110d78u: goto label_110d78;
        case 0x110d7cu: goto label_110d7c;
        case 0x110d80u: goto label_110d80;
        case 0x110d84u: goto label_110d84;
        case 0x110d88u: goto label_110d88;
        case 0x110d8cu: goto label_110d8c;
        case 0x110d90u: goto label_110d90;
        case 0x110d94u: goto label_110d94;
        case 0x110d98u: goto label_110d98;
        case 0x110d9cu: goto label_110d9c;
        case 0x110da0u: goto label_110da0;
        case 0x110da4u: goto label_110da4;
        case 0x110da8u: goto label_110da8;
        case 0x110dacu: goto label_110dac;
        case 0x110db0u: goto label_110db0;
        case 0x110db4u: goto label_110db4;
        case 0x110db8u: goto label_110db8;
        case 0x110dbcu: goto label_110dbc;
        case 0x110dc0u: goto label_110dc0;
        case 0x110dc4u: goto label_110dc4;
        case 0x110dc8u: goto label_110dc8;
        case 0x110dccu: goto label_110dcc;
        case 0x110dd0u: goto label_110dd0;
        case 0x110dd4u: goto label_110dd4;
        case 0x110dd8u: goto label_110dd8;
        case 0x110ddcu: goto label_110ddc;
        case 0x110de0u: goto label_110de0;
        case 0x110de4u: goto label_110de4;
        case 0x110de8u: goto label_110de8;
        case 0x110decu: goto label_110dec;
        case 0x110df0u: goto label_110df0;
        case 0x110df4u: goto label_110df4;
        case 0x110df8u: goto label_110df8;
        case 0x110dfcu: goto label_110dfc;
        case 0x110e00u: goto label_110e00;
        case 0x110e04u: goto label_110e04;
        case 0x110e08u: goto label_110e08;
        case 0x110e0cu: goto label_110e0c;
        case 0x110e10u: goto label_110e10;
        case 0x110e14u: goto label_110e14;
        case 0x110e18u: goto label_110e18;
        case 0x110e1cu: goto label_110e1c;
        case 0x110e20u: goto label_110e20;
        case 0x110e24u: goto label_110e24;
        case 0x110e28u: goto label_110e28;
        case 0x110e2cu: goto label_110e2c;
        case 0x110e30u: goto label_110e30;
        case 0x110e34u: goto label_110e34;
        case 0x110e38u: goto label_110e38;
        case 0x110e3cu: goto label_110e3c;
        case 0x110e40u: goto label_110e40;
        case 0x110e44u: goto label_110e44;
        case 0x110e48u: goto label_110e48;
        case 0x110e4cu: goto label_110e4c;
        case 0x110e50u: goto label_110e50;
        case 0x110e54u: goto label_110e54;
        case 0x110e58u: goto label_110e58;
        case 0x110e5cu: goto label_110e5c;
        case 0x110e60u: goto label_110e60;
        case 0x110e64u: goto label_110e64;
        case 0x110e68u: goto label_110e68;
        case 0x110e6cu: goto label_110e6c;
        case 0x110e70u: goto label_110e70;
        case 0x110e74u: goto label_110e74;
        case 0x110e78u: goto label_110e78;
        case 0x110e7cu: goto label_110e7c;
        case 0x110e80u: goto label_110e80;
        case 0x110e84u: goto label_110e84;
        case 0x110e88u: goto label_110e88;
        case 0x110e8cu: goto label_110e8c;
        case 0x110e90u: goto label_110e90;
        case 0x110e94u: goto label_110e94;
        case 0x110e98u: goto label_110e98;
        case 0x110e9cu: goto label_110e9c;
        case 0x110ea0u: goto label_110ea0;
        case 0x110ea4u: goto label_110ea4;
        case 0x110ea8u: goto label_110ea8;
        case 0x110eacu: goto label_110eac;
        case 0x110eb0u: goto label_110eb0;
        case 0x110eb4u: goto label_110eb4;
        case 0x110eb8u: goto label_110eb8;
        case 0x110ebcu: goto label_110ebc;
        case 0x110ec0u: goto label_110ec0;
        case 0x110ec4u: goto label_110ec4;
        case 0x110ec8u: goto label_110ec8;
        case 0x110eccu: goto label_110ecc;
        case 0x110ed0u: goto label_110ed0;
        case 0x110ed4u: goto label_110ed4;
        case 0x110ed8u: goto label_110ed8;
        case 0x110edcu: goto label_110edc;
        case 0x110ee0u: goto label_110ee0;
        case 0x110ee4u: goto label_110ee4;
        case 0x110ee8u: goto label_110ee8;
        case 0x110eecu: goto label_110eec;
        case 0x110ef0u: goto label_110ef0;
        case 0x110ef4u: goto label_110ef4;
        case 0x110ef8u: goto label_110ef8;
        case 0x110efcu: goto label_110efc;
        case 0x110f00u: goto label_110f00;
        case 0x110f04u: goto label_110f04;
        case 0x110f08u: goto label_110f08;
        case 0x110f0cu: goto label_110f0c;
        case 0x110f10u: goto label_110f10;
        case 0x110f14u: goto label_110f14;
        case 0x110f18u: goto label_110f18;
        case 0x110f1cu: goto label_110f1c;
        case 0x110f20u: goto label_110f20;
        case 0x110f24u: goto label_110f24;
        case 0x110f28u: goto label_110f28;
        case 0x110f2cu: goto label_110f2c;
        case 0x110f30u: goto label_110f30;
        case 0x110f34u: goto label_110f34;
        case 0x110f38u: goto label_110f38;
        case 0x110f3cu: goto label_110f3c;
        case 0x110f40u: goto label_110f40;
        case 0x110f44u: goto label_110f44;
        case 0x110f48u: goto label_110f48;
        case 0x110f4cu: goto label_110f4c;
        default: break;
    }

    ctx->pc = 0x110d78u;

label_110d78:
    // 0x110d78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x110d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_110d7c:
    // 0x110d7c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x110d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_110d80:
    // 0x110d80: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x110d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_110d84:
    // 0x110d84: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x110d84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_110d88:
    // 0x110d88: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x110d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_110d8c:
    // 0x110d8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x110d8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_110d90:
    // 0x110d90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x110d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_110d94:
    // 0x110d94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x110d94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110d98:
    // 0x110d98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_110d9c:
    // 0x110d9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x110d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110da0:
    // 0x110da0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_110da4:
    // 0x110da4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x110da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_110da8:
    // 0x110da8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x110da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_110dac:
    // 0x110dac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x110dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_110db0:
    // 0x110db0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x110db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_110db4:
    // 0x110db4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_110db8:
    if (ctx->pc == 0x110DB8u) {
        ctx->pc = 0x110DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DB4u;
        // 0x110db8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110DBCu;
        goto label_110dbc;
    }
    ctx->pc = 0x110DB4u;
    {
        const bool branch_taken_0x110db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DB4u;
        // 0x110db8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110db4) {
            ctx->pc = 0x110DC4u;
            goto label_110dc4;
        }
    }
    ctx->pc = 0x110DBCu;
label_110dbc:
    // 0x110dbc: 0x1000005a  b           . + 4 + (0x5A << 2)
label_110dc0:
    if (ctx->pc == 0x110DC0u) {
        ctx->pc = 0x110DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DBCu;
        // 0x110dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110DC4u;
        goto label_110dc4;
    }
    ctx->pc = 0x110DBCu;
    {
        const bool branch_taken_0x110dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DBCu;
        // 0x110dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dbc) {
            ctx->pc = 0x110F28u;
            goto label_110f28;
        }
    }
    ctx->pc = 0x110DC4u;
label_110dc4:
    // 0x110dc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x110dc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110dc8:
    // 0x110dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110dcc:
    // 0x110dcc: 0xc048db2  jal         func_1236C8
label_110dd0:
    if (ctx->pc == 0x110DD0u) {
        ctx->pc = 0x110DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DCCu;
        // 0x110dd0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110DD4u;
        goto label_110dd4;
    }
    ctx->pc = 0x110DCCu;
    SET_GPR_U32(ctx, 31, 0x110DD4u);
    ctx->pc = 0x110DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DCCu;
    // 0x110dd0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x110DCCu, 0x110DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DD4u;
label_110dd4:
    // 0x110dd4: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_110dd8:
    if (ctx->pc == 0x110DD8u) {
        ctx->pc = 0x110DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DD4u;
        // 0x110dd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110DDCu;
        goto label_110ddc;
    }
    ctx->pc = 0x110DD4u;
    {
        const bool branch_taken_0x110dd4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x110DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DD4u;
        // 0x110dd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dd4) {
            ctx->pc = 0x110E08u;
            goto label_110e08;
        }
    }
    ctx->pc = 0x110DDCu;
label_110ddc:
    // 0x110ddc: 0xc048ca6  jal         func_123298
label_110de0:
    if (ctx->pc == 0x110DE0u) {
        ctx->pc = 0x110DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DDCu;
        // 0x110de0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110DE4u;
        goto label_110de4;
    }
    ctx->pc = 0x110DDCu;
    SET_GPR_U32(ctx, 31, 0x110DE4u);
    ctx->pc = 0x110DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DDCu;
    // 0x110de0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x110DDCu, 0x110DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DE4u;
label_110de4:
    // 0x110de4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x110de4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_110de8:
    // 0x110de8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110dec:
    // 0x110dec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x110decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_110df0:
    // 0x110df0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x110df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110df4:
    // 0x110df4: 0x2a0f809  jalr        $s5
label_110df8:
    if (ctx->pc == 0x110DF8u) {
        ctx->pc = 0x110DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DF4u;
        // 0x110df8: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110DFCu;
        goto label_110dfc;
    }
    ctx->pc = 0x110DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x110DFCu);
        ctx->pc = 0x110DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DF4u;
        // 0x110df8: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110DF4u, 0x110DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110DFCu;
label_110dfc:
    // 0x110dfc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x110dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_110e00:
    // 0x110e00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x110e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_110e04:
    // 0x110e04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x110e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_110e08:
    // 0x110e08: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x110e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
label_110e0c:
    // 0x110e0c: 0xdc25dfc8  ld          $a1, -0x2038($at)
    ctx->pc = 0x110e0cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959048)));
label_110e10:
    // 0x110e10: 0xc048db2  jal         func_1236C8
label_110e14:
    if (ctx->pc == 0x110E14u) {
        ctx->pc = 0x110E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E10u;
        // 0x110e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E18u;
        goto label_110e18;
    }
    ctx->pc = 0x110E10u;
    SET_GPR_U32(ctx, 31, 0x110E18u);
    ctx->pc = 0x110E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E10u;
    // 0x110e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x110E10u, 0x110E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E18u;
label_110e18:
    // 0x110e18: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_110e1c:
    if (ctx->pc == 0x110E1Cu) {
        ctx->pc = 0x110E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E18u;
        // 0x110e1c: 0x3c130015  lui         $s3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E20u;
        goto label_110e20;
    }
    ctx->pc = 0x110E18u;
    {
        const bool branch_taken_0x110e18 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x110E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E18u;
        // 0x110e1c: 0x3c130015  lui         $s3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e18) {
            ctx->pc = 0x110E5Cu;
            goto label_110e5c;
        }
    }
    ctx->pc = 0x110E20u;
label_110e20:
    // 0x110e20: 0x10000006  b           . + 4 + (0x6 << 2)
label_110e24:
    if (ctx->pc == 0x110E24u) {
        ctx->pc = 0x110E28u;
        goto label_110e28;
    }
    ctx->pc = 0x110E20u;
    {
        const bool branch_taken_0x110e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110e20) {
            ctx->pc = 0x110E3Cu;
            goto label_110e3c;
        }
    }
    ctx->pc = 0x110E28u;
label_110e28:
    // 0x110e28: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x110e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_110e2c:
    // 0x110e2c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x110e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_110e30:
    // 0x110e30: 0xc048cc0  jal         func_123300
label_110e34:
    if (ctx->pc == 0x110E34u) {
        ctx->pc = 0x110E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E30u;
        // 0x110e34: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E38u;
        goto label_110e38;
    }
    ctx->pc = 0x110E30u;
    SET_GPR_U32(ctx, 31, 0x110E38u);
    ctx->pc = 0x110E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E30u;
    // 0x110e34: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x110E30u, 0x110E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E38u;
label_110e38:
    // 0x110e38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110e3c:
    // 0x110e3c: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x110e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
label_110e40:
    // 0x110e40: 0xdc25dfd0  ld          $a1, -0x2030($at)
    ctx->pc = 0x110e40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959056)));
label_110e44:
    // 0x110e44: 0xc048db2  jal         func_1236C8
label_110e48:
    if (ctx->pc == 0x110E48u) {
        ctx->pc = 0x110E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E44u;
        // 0x110e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E4Cu;
        goto label_110e4c;
    }
    ctx->pc = 0x110E44u;
    SET_GPR_U32(ctx, 31, 0x110E4Cu);
    ctx->pc = 0x110E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E44u;
    // 0x110e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x110E44u, 0x110E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E4Cu;
label_110e4c:
    // 0x110e4c: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_110e50:
    if (ctx->pc == 0x110E50u) {
        ctx->pc = 0x110E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E4Cu;
        // 0x110e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E54u;
        goto label_110e54;
    }
    ctx->pc = 0x110E4Cu;
    {
        const bool branch_taken_0x110e4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x110E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E4Cu;
        // 0x110e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e4c) {
            ctx->pc = 0x110E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110e28;
        }
    }
    ctx->pc = 0x110E54u;
label_110e54:
    // 0x110e54: 0x10000015  b           . + 4 + (0x15 << 2)
label_110e58:
    if (ctx->pc == 0x110E58u) {
        ctx->pc = 0x110E5Cu;
        goto label_110e5c;
    }
    ctx->pc = 0x110E54u;
    {
        const bool branch_taken_0x110e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110e54) {
            ctx->pc = 0x110EACu;
            goto label_110eac;
        }
    }
    ctx->pc = 0x110E5Cu;
label_110e5c:
    // 0x110e5c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x110e5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_110e60:
    // 0x110e60: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x110e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_110e64:
    // 0x110e64: 0xc048db2  jal         func_1236C8
label_110e68:
    if (ctx->pc == 0x110E68u) {
        ctx->pc = 0x110E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E64u;
        // 0x110e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E6Cu;
        goto label_110e6c;
    }
    ctx->pc = 0x110E64u;
    SET_GPR_U32(ctx, 31, 0x110E6Cu);
    ctx->pc = 0x110E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E64u;
    // 0x110e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x110E64u, 0x110E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E6Cu;
label_110e6c:
    // 0x110e6c: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_110e70:
    if (ctx->pc == 0x110E70u) {
        ctx->pc = 0x110E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E6Cu;
        // 0x110e70: 0x3c130015  lui         $s3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E74u;
        goto label_110e74;
    }
    ctx->pc = 0x110E6Cu;
    {
        const bool branch_taken_0x110e6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x110E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E6Cu;
        // 0x110e70: 0x3c130015  lui         $s3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e6c) {
            ctx->pc = 0x110EACu;
            goto label_110eac;
        }
    }
    ctx->pc = 0x110E74u;
label_110e74:
    // 0x110e74: 0x10000007  b           . + 4 + (0x7 << 2)
label_110e78:
    if (ctx->pc == 0x110E78u) {
        ctx->pc = 0x110E7Cu;
        goto label_110e7c;
    }
    ctx->pc = 0x110E74u;
    {
        const bool branch_taken_0x110e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110e74) {
            ctx->pc = 0x110E94u;
            goto label_110e94;
        }
    }
    ctx->pc = 0x110E7Cu;
label_110e7c:
    // 0x110e7c: 0x0  nop
    ctx->pc = 0x110e7cu;
    // NOP
label_110e80:
    // 0x110e80: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x110e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_110e84:
    // 0x110e84: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x110e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_110e88:
    // 0x110e88: 0xc048d62  jal         func_123588
label_110e8c:
    if (ctx->pc == 0x110E8Cu) {
        ctx->pc = 0x110E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E88u;
        // 0x110e8c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E90u;
        goto label_110e90;
    }
    ctx->pc = 0x110E88u;
    SET_GPR_U32(ctx, 31, 0x110E90u);
    ctx->pc = 0x110E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E88u;
    // 0x110e8c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123588u, 0x110E88u, 0x110E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E90u;
label_110e90:
    // 0x110e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110e94:
    // 0x110e94: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x110e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_110e98:
    // 0x110e98: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x110e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_110e9c:
    // 0x110e9c: 0xc048db2  jal         func_1236C8
label_110ea0:
    if (ctx->pc == 0x110EA0u) {
        ctx->pc = 0x110EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E9Cu;
        // 0x110ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110EA4u;
        goto label_110ea4;
    }
    ctx->pc = 0x110E9Cu;
    SET_GPR_U32(ctx, 31, 0x110EA4u);
    ctx->pc = 0x110EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E9Cu;
    // 0x110ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x110E9Cu, 0x110EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EA4u;
label_110ea4:
    // 0x110ea4: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_110ea8:
    if (ctx->pc == 0x110EA8u) {
        ctx->pc = 0x110EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EA4u;
        // 0x110ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110EACu;
        goto label_110eac;
    }
    ctx->pc = 0x110EA4u;
    {
        const bool branch_taken_0x110ea4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x110EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EA4u;
        // 0x110ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ea4) {
            ctx->pc = 0x110E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110e80;
        }
    }
    ctx->pc = 0x110EACu;
label_110eac:
    // 0x110eac: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x110eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
label_110eb0:
    // 0x110eb0: 0xdc25dfd8  ld          $a1, -0x2028($at)
    ctx->pc = 0x110eb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959064)));
label_110eb4:
    // 0x110eb4: 0xc048cc0  jal         func_123300
label_110eb8:
    if (ctx->pc == 0x110EB8u) {
        ctx->pc = 0x110EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EB4u;
        // 0x110eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110EBCu;
        goto label_110ebc;
    }
    ctx->pc = 0x110EB4u;
    SET_GPR_U32(ctx, 31, 0x110EBCu);
    ctx->pc = 0x110EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EB4u;
    // 0x110eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x110EB4u, 0x110EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EBCu;
label_110ebc:
    // 0x110ebc: 0xc048626  jal         func_121898
label_110ec0:
    if (ctx->pc == 0x110EC0u) {
        ctx->pc = 0x110EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EBCu;
        // 0x110ec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110EC4u;
        goto label_110ec4;
    }
    ctx->pc = 0x110EBCu;
    SET_GPR_U32(ctx, 31, 0x110EC4u);
    ctx->pc = 0x110EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EBCu;
    // 0x110ec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121898u, 0x110EBCu, 0x110EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EC4u;
label_110ec4:
    // 0x110ec4: 0xc04433a  jal         func_110CE8
label_110ec8:
    if (ctx->pc == 0x110EC8u) {
        ctx->pc = 0x110EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EC4u;
        // 0x110ec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110ECCu;
        goto label_110ecc;
    }
    ctx->pc = 0x110EC4u;
    SET_GPR_U32(ctx, 31, 0x110ECCu);
    ctx->pc = 0x110EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EC4u;
    // 0x110ec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CE8u, 0x110EC4u, 0x110ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110ECCu;
label_110ecc:
    // 0x110ecc: 0x2667dfb0  addiu       $a3, $s3, -0x2050
    ctx->pc = 0x110eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959024));
label_110ed0:
    // 0x110ed0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x110ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110ed4:
    // 0x110ed4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x110ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_110ed8:
    // 0x110ed8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x110ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_110edc:
    // 0x110edc: 0xc044744  jal         func_111D10
label_110ee0:
    if (ctx->pc == 0x110EE0u) {
        ctx->pc = 0x110EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EDCu;
        // 0x110ee0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110EE4u;
        goto label_110ee4;
    }
    ctx->pc = 0x110EDCu;
    SET_GPR_U32(ctx, 31, 0x110EE4u);
    ctx->pc = 0x110EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EDCu;
    // 0x110ee0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D10u, 0x110EDCu, 0x110EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EE4u;
label_110ee4:
    // 0x110ee4: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_110ee8:
    if (ctx->pc == 0x110EE8u) {
        ctx->pc = 0x110EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EE4u;
        // 0x110ee8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110EECu;
        goto label_110eec;
    }
    ctx->pc = 0x110EE4u;
    {
        const bool branch_taken_0x110ee4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x110EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EE4u;
        // 0x110ee8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ee4) {
            ctx->pc = 0x110F04u;
            goto label_110f04;
        }
    }
    ctx->pc = 0x110EECu;
label_110eec:
    // 0x110eec: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x110eecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
label_110ef0:
    // 0x110ef0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x110ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_110ef4:
    // 0x110ef4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x110ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_110ef8:
    // 0x110ef8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x110ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110efc:
    // 0x110efc: 0x10000006  b           . + 4 + (0x6 << 2)
label_110f00:
    if (ctx->pc == 0x110F00u) {
        ctx->pc = 0x110F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EFCu;
        // 0x110f00: 0x24e7dfb8  addiu       $a3, $a3, -0x2048 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110F04u;
        goto label_110f04;
    }
    ctx->pc = 0x110EFCu;
    {
        const bool branch_taken_0x110efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EFCu;
        // 0x110f00: 0x24e7dfb8  addiu       $a3, $a3, -0x2048 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110efc) {
            ctx->pc = 0x110F18u;
            goto label_110f18;
        }
    }
    ctx->pc = 0x110F04u;
label_110f04:
    // 0x110f04: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x110f04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
label_110f08:
    // 0x110f08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x110f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_110f0c:
    // 0x110f0c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x110f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_110f10:
    // 0x110f10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x110f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110f14:
    // 0x110f14: 0x24e7dfc0  addiu       $a3, $a3, -0x2040
    ctx->pc = 0x110f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959040));
label_110f18:
    // 0x110f18: 0xc044744  jal         func_111D10
label_110f1c:
    if (ctx->pc == 0x110F1Cu) {
        ctx->pc = 0x110F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F18u;
        // 0x110f1c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110F20u;
        goto label_110f20;
    }
    ctx->pc = 0x110F18u;
    SET_GPR_U32(ctx, 31, 0x110F20u);
    ctx->pc = 0x110F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F18u;
    // 0x110f1c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D10u, 0x110F18u, 0x110F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F20u;
label_110f20:
    // 0x110f20: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x110f20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_110f24:
    // 0x110f24: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x110f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_110f28:
    // 0x110f28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x110f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_110f2c:
    // 0x110f2c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x110f2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_110f30:
    // 0x110f30: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x110f30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_110f34:
    // 0x110f34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x110f34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_110f38:
    // 0x110f38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x110f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_110f3c:
    // 0x110f3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_110f40:
    // 0x110f40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_110f44:
    // 0x110f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110f48:
    // 0x110f48: 0x3e00008  jr          $ra
label_110f4c:
    if (ctx->pc == 0x110F4Cu) {
        ctx->pc = 0x110F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F48u;
        // 0x110f4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110F50u;
        goto label_fallthrough_0x110f48;
    }
    ctx->pc = 0x110F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F48u;
        // 0x110f4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x110f48:
    ctx->pc = 0x110F50u;
}
