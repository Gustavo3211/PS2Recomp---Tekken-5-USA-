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

// Function: sub_00122D78
// Address: 0x122d78 - 0x122e40
void sub_00122D78_0x122d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122D78_0x122d78");
#endif

    switch (ctx->pc) {
        case 0x122d78u: goto label_122d78;
        case 0x122d7cu: goto label_122d7c;
        case 0x122d80u: goto label_122d80;
        case 0x122d84u: goto label_122d84;
        case 0x122d88u: goto label_122d88;
        case 0x122d8cu: goto label_122d8c;
        case 0x122d90u: goto label_122d90;
        case 0x122d94u: goto label_122d94;
        case 0x122d98u: goto label_122d98;
        case 0x122d9cu: goto label_122d9c;
        case 0x122da0u: goto label_122da0;
        case 0x122da4u: goto label_122da4;
        case 0x122da8u: goto label_122da8;
        case 0x122dacu: goto label_122dac;
        case 0x122db0u: goto label_122db0;
        case 0x122db4u: goto label_122db4;
        case 0x122db8u: goto label_122db8;
        case 0x122dbcu: goto label_122dbc;
        case 0x122dc0u: goto label_122dc0;
        case 0x122dc4u: goto label_122dc4;
        case 0x122dc8u: goto label_122dc8;
        case 0x122dccu: goto label_122dcc;
        case 0x122dd0u: goto label_122dd0;
        case 0x122dd4u: goto label_122dd4;
        case 0x122dd8u: goto label_122dd8;
        case 0x122ddcu: goto label_122ddc;
        case 0x122de0u: goto label_122de0;
        case 0x122de4u: goto label_122de4;
        case 0x122de8u: goto label_122de8;
        case 0x122decu: goto label_122dec;
        case 0x122df0u: goto label_122df0;
        case 0x122df4u: goto label_122df4;
        case 0x122df8u: goto label_122df8;
        case 0x122dfcu: goto label_122dfc;
        case 0x122e00u: goto label_122e00;
        case 0x122e04u: goto label_122e04;
        case 0x122e08u: goto label_122e08;
        case 0x122e0cu: goto label_122e0c;
        case 0x122e10u: goto label_122e10;
        case 0x122e14u: goto label_122e14;
        case 0x122e18u: goto label_122e18;
        case 0x122e1cu: goto label_122e1c;
        case 0x122e20u: goto label_122e20;
        case 0x122e24u: goto label_122e24;
        case 0x122e28u: goto label_122e28;
        case 0x122e2cu: goto label_122e2c;
        case 0x122e30u: goto label_122e30;
        case 0x122e34u: goto label_122e34;
        case 0x122e38u: goto label_122e38;
        case 0x122e3cu: goto label_122e3c;
        default: break;
    }

    ctx->pc = 0x122d78u;

label_122d78:
    // 0x122d78: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x122d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
label_122d7c:
    // 0x122d7c: 0x8fc5048c  lw          $a1, 0x48C($fp)
    ctx->pc = 0x122d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_122d80:
    // 0x122d80: 0xc049334  jal         func_124CD0
label_122d84:
    if (ctx->pc == 0x122D84u) {
        ctx->pc = 0x122D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D80u;
        // 0x122d84: 0x24442d78  addiu       $a0, $v0, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D88u;
        goto label_122d88;
    }
    ctx->pc = 0x122D80u;
    SET_GPR_U32(ctx, 31, 0x122D88u);
    ctx->pc = 0x122D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D80u;
    // 0x122d84: 0x24442d78  addiu       $a0, $v0, 0x2D78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124CD0u, 0x122D80u, 0x122D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D88u;
label_122d88:
    // 0x122d88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_122d8c:
    if (ctx->pc == 0x122D8Cu) {
        ctx->pc = 0x122D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D88u;
        // 0x122d8c: 0xafc2048c  sw          $v0, 0x48C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D90u;
        goto label_122d90;
    }
    ctx->pc = 0x122D88u;
    {
        const bool branch_taken_0x122d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D88u;
        // 0x122d8c: 0xafc2048c  sw          $v0, 0x48C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d88) {
            ctx->pc = 0x122DA0u;
            goto label_122da0;
        }
    }
    ctx->pc = 0x122D90u;
label_122d90:
    // 0x122d90: 0xc048724  jal         func_121C90
label_122d94:
    if (ctx->pc == 0x122D94u) {
        ctx->pc = 0x122D98u;
        goto label_122d98;
    }
    ctx->pc = 0x122D90u;
    SET_GPR_U32(ctx, 31, 0x122D98u);
    ctx->pc = 0x121C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C90u, 0x122D90u, 0x122D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D98u;
label_122d98:
    // 0x122d98: 0x800008  jr          $a0
label_122d9c:
    if (ctx->pc == 0x122D9Cu) {
        ctx->pc = 0x122D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D98u;
        // 0x122d9c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122DA0u;
        goto label_122da0;
    }
    ctx->pc = 0x122D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x122D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D98u;
        // 0x122d9c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122D98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x122DA0u;
label_122da0:
    // 0x122da0: 0x8fc3048c  lw          $v1, 0x48C($fp)
    ctx->pc = 0x122da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_122da4:
    // 0x122da4: 0x27c20590  addiu       $v0, $fp, 0x590
    ctx->pc = 0x122da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1424));
label_122da8:
    // 0x122da8: 0x27c70480  addiu       $a3, $fp, 0x480
    ctx->pc = 0x122da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1152));
label_122dac:
    // 0x122dac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x122dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_122db0:
    // 0x122db0: 0x8fc50520  lw          $a1, 0x520($fp)
    ctx->pc = 0x122db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1312)));
label_122db4:
    // 0x122db4: 0x8fc40488  lw          $a0, 0x488($fp)
    ctx->pc = 0x122db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1160)));
label_122db8:
    // 0x122db8: 0x8fc6048c  lw          $a2, 0x48C($fp)
    ctx->pc = 0x122db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_122dbc:
    // 0x122dbc: 0xc048a58  jal         func_122960
label_122dc0:
    if (ctx->pc == 0x122DC0u) {
        ctx->pc = 0x122DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DBCu;
        // 0x122dc0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122DC4u;
        goto label_122dc4;
    }
    ctx->pc = 0x122DBCu;
    SET_GPR_U32(ctx, 31, 0x122DC4u);
    ctx->pc = 0x122DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DBCu;
    // 0x122dc0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122960u, 0x122DBCu, 0x122DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DC4u;
label_122dc4:
    // 0x122dc4: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x122dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_122dc8:
    // 0x122dc8: 0x24a52d98  addiu       $a1, $a1, 0x2D98
    ctx->pc = 0x122dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11672));
label_122dcc:
    // 0x122dcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122dd0:
    // 0x122dd0: 0x8fc30480  lw          $v1, 0x480($fp)
    ctx->pc = 0x122dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1152)));
label_122dd4:
    // 0x122dd4: 0x8fc20488  lw          $v0, 0x488($fp)
    ctx->pc = 0x122dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1160)));
label_122dd8:
    // 0x122dd8: 0xafc50520  sw          $a1, 0x520($fp)
    ctx->pc = 0x122dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1312), GPR_U32(ctx, 5));
label_122ddc:
    // 0x122ddc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x122ddcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_122de0:
    // 0x122de0: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x122de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_122de4:
    // 0x122de4: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x122de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_122de8:
    // 0x122de8: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x122de8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_122dec:
    // 0x122dec: 0x7bb304c0  lq          $s3, 0x4C0($sp)
    ctx->pc = 0x122decu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_122df0:
    // 0x122df0: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x122df0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_122df4:
    // 0x122df4: 0x7bb504e0  lq          $s5, 0x4E0($sp)
    ctx->pc = 0x122df4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_122df8:
    // 0x122df8: 0x7bb604f0  lq          $s6, 0x4F0($sp)
    ctx->pc = 0x122df8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_122dfc:
    // 0x122dfc: 0x7bb70500  lq          $s7, 0x500($sp)
    ctx->pc = 0x122dfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_122e00:
    // 0x122e00: 0x7bbe0510  lq          $fp, 0x510($sp)
    ctx->pc = 0x122e00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_122e04:
    // 0x122e04: 0xdfbf0520  ld          $ra, 0x520($sp)
    ctx->pc = 0x122e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
label_122e08:
    // 0x122e08: 0xc7bf0580  lwc1        $f31, 0x580($sp)
    ctx->pc = 0x122e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_122e0c:
    // 0x122e0c: 0xc7be0578  lwc1        $f30, 0x578($sp)
    ctx->pc = 0x122e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_122e10:
    // 0x122e10: 0xc7bd0570  lwc1        $f29, 0x570($sp)
    ctx->pc = 0x122e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_122e14:
    // 0x122e14: 0xc7bc0568  lwc1        $f28, 0x568($sp)
    ctx->pc = 0x122e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_122e18:
    // 0x122e18: 0xc7bb0560  lwc1        $f27, 0x560($sp)
    ctx->pc = 0x122e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_122e1c:
    // 0x122e1c: 0xc7ba0558  lwc1        $f26, 0x558($sp)
    ctx->pc = 0x122e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_122e20:
    // 0x122e20: 0xc7b90550  lwc1        $f25, 0x550($sp)
    ctx->pc = 0x122e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_122e24:
    // 0x122e24: 0xc7b80548  lwc1        $f24, 0x548($sp)
    ctx->pc = 0x122e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_122e28:
    // 0x122e28: 0xc7b70540  lwc1        $f23, 0x540($sp)
    ctx->pc = 0x122e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_122e2c:
    // 0x122e2c: 0xc7b60538  lwc1        $f22, 0x538($sp)
    ctx->pc = 0x122e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_122e30:
    // 0x122e30: 0xc7b50530  lwc1        $f21, 0x530($sp)
    ctx->pc = 0x122e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_122e34:
    // 0x122e34: 0xc7b40528  lwc1        $f20, 0x528($sp)
    ctx->pc = 0x122e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_122e38:
    // 0x122e38: 0x3e00008  jr          $ra
label_122e3c:
    if (ctx->pc == 0x122E3Cu) {
        ctx->pc = 0x122E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E38u;
        // 0x122e3c: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122E40u;
        goto label_fallthrough_0x122e38;
    }
    ctx->pc = 0x122E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E38u;
        // 0x122e3c: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x122e38:
    ctx->pc = 0x122E40u;
}
