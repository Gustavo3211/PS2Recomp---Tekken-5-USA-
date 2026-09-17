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

// Function: sub_00122ED8
// Address: 0x122ed8 - 0x122fa0
void sub_00122ED8_0x122ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122ED8_0x122ed8");
#endif

    switch (ctx->pc) {
        case 0x122ed8u: goto label_122ed8;
        case 0x122edcu: goto label_122edc;
        case 0x122ee0u: goto label_122ee0;
        case 0x122ee4u: goto label_122ee4;
        case 0x122ee8u: goto label_122ee8;
        case 0x122eecu: goto label_122eec;
        case 0x122ef0u: goto label_122ef0;
        case 0x122ef4u: goto label_122ef4;
        case 0x122ef8u: goto label_122ef8;
        case 0x122efcu: goto label_122efc;
        case 0x122f00u: goto label_122f00;
        case 0x122f04u: goto label_122f04;
        case 0x122f08u: goto label_122f08;
        case 0x122f0cu: goto label_122f0c;
        case 0x122f10u: goto label_122f10;
        case 0x122f14u: goto label_122f14;
        case 0x122f18u: goto label_122f18;
        case 0x122f1cu: goto label_122f1c;
        case 0x122f20u: goto label_122f20;
        case 0x122f24u: goto label_122f24;
        case 0x122f28u: goto label_122f28;
        case 0x122f2cu: goto label_122f2c;
        case 0x122f30u: goto label_122f30;
        case 0x122f34u: goto label_122f34;
        case 0x122f38u: goto label_122f38;
        case 0x122f3cu: goto label_122f3c;
        case 0x122f40u: goto label_122f40;
        case 0x122f44u: goto label_122f44;
        case 0x122f48u: goto label_122f48;
        case 0x122f4cu: goto label_122f4c;
        case 0x122f50u: goto label_122f50;
        case 0x122f54u: goto label_122f54;
        case 0x122f58u: goto label_122f58;
        case 0x122f5cu: goto label_122f5c;
        case 0x122f60u: goto label_122f60;
        case 0x122f64u: goto label_122f64;
        case 0x122f68u: goto label_122f68;
        case 0x122f6cu: goto label_122f6c;
        case 0x122f70u: goto label_122f70;
        case 0x122f74u: goto label_122f74;
        case 0x122f78u: goto label_122f78;
        case 0x122f7cu: goto label_122f7c;
        case 0x122f80u: goto label_122f80;
        case 0x122f84u: goto label_122f84;
        case 0x122f88u: goto label_122f88;
        case 0x122f8cu: goto label_122f8c;
        case 0x122f90u: goto label_122f90;
        case 0x122f94u: goto label_122f94;
        case 0x122f98u: goto label_122f98;
        case 0x122f9cu: goto label_122f9c;
        default: break;
    }

    ctx->pc = 0x122ed8u;

label_122ed8:
    // 0x122ed8: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x122ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
label_122edc:
    // 0x122edc: 0x8fc50490  lw          $a1, 0x490($fp)
    ctx->pc = 0x122edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1168)));
label_122ee0:
    // 0x122ee0: 0xc049334  jal         func_124CD0
label_122ee4:
    if (ctx->pc == 0x122EE4u) {
        ctx->pc = 0x122EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EE0u;
        // 0x122ee4: 0x24442ed8  addiu       $a0, $v0, 0x2ED8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122EE8u;
        goto label_122ee8;
    }
    ctx->pc = 0x122EE0u;
    SET_GPR_U32(ctx, 31, 0x122EE8u);
    ctx->pc = 0x122EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122EE0u;
    // 0x122ee4: 0x24442ed8  addiu       $a0, $v0, 0x2ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124CD0u, 0x122EE0u, 0x122EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EE8u;
label_122ee8:
    // 0x122ee8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_122eec:
    if (ctx->pc == 0x122EECu) {
        ctx->pc = 0x122EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EE8u;
        // 0x122eec: 0xafc20490  sw          $v0, 0x490($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122EF0u;
        goto label_122ef0;
    }
    ctx->pc = 0x122EE8u;
    {
        const bool branch_taken_0x122ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EE8u;
        // 0x122eec: 0xafc20490  sw          $v0, 0x490($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ee8) {
            ctx->pc = 0x122F00u;
            goto label_122f00;
        }
    }
    ctx->pc = 0x122EF0u;
label_122ef0:
    // 0x122ef0: 0xc048724  jal         func_121C90
label_122ef4:
    if (ctx->pc == 0x122EF4u) {
        ctx->pc = 0x122EF8u;
        goto label_122ef8;
    }
    ctx->pc = 0x122EF0u;
    SET_GPR_U32(ctx, 31, 0x122EF8u);
    ctx->pc = 0x121C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C90u, 0x122EF0u, 0x122EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EF8u;
label_122ef8:
    // 0x122ef8: 0x800008  jr          $a0
label_122efc:
    if (ctx->pc == 0x122EFCu) {
        ctx->pc = 0x122EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EF8u;
        // 0x122efc: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122F00u;
        goto label_122f00;
    }
    ctx->pc = 0x122EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x122EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EF8u;
        // 0x122efc: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122EF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x122F00u;
label_122f00:
    // 0x122f00: 0x8fc30490  lw          $v1, 0x490($fp)
    ctx->pc = 0x122f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1168)));
label_122f04:
    // 0x122f04: 0x27c205a0  addiu       $v0, $fp, 0x5A0
    ctx->pc = 0x122f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1440));
label_122f08:
    // 0x122f08: 0x27c70480  addiu       $a3, $fp, 0x480
    ctx->pc = 0x122f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1152));
label_122f0c:
    // 0x122f0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x122f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_122f10:
    // 0x122f10: 0x8fc50530  lw          $a1, 0x530($fp)
    ctx->pc = 0x122f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1328)));
label_122f14:
    // 0x122f14: 0x8fc4048c  lw          $a0, 0x48C($fp)
    ctx->pc = 0x122f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_122f18:
    // 0x122f18: 0x8fc60490  lw          $a2, 0x490($fp)
    ctx->pc = 0x122f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1168)));
label_122f1c:
    // 0x122f1c: 0xc048a58  jal         func_122960
label_122f20:
    if (ctx->pc == 0x122F20u) {
        ctx->pc = 0x122F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F1Cu;
        // 0x122f20: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122F24u;
        goto label_122f24;
    }
    ctx->pc = 0x122F1Cu;
    SET_GPR_U32(ctx, 31, 0x122F24u);
    ctx->pc = 0x122F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F1Cu;
    // 0x122f20: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122960u, 0x122F1Cu, 0x122F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F24u;
label_122f24:
    // 0x122f24: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x122f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_122f28:
    // 0x122f28: 0x24a52ef8  addiu       $a1, $a1, 0x2EF8
    ctx->pc = 0x122f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12024));
label_122f2c:
    // 0x122f2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122f30:
    // 0x122f30: 0x8fc30480  lw          $v1, 0x480($fp)
    ctx->pc = 0x122f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1152)));
label_122f34:
    // 0x122f34: 0x8fc2048c  lw          $v0, 0x48C($fp)
    ctx->pc = 0x122f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_122f38:
    // 0x122f38: 0xafc50530  sw          $a1, 0x530($fp)
    ctx->pc = 0x122f38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1328), GPR_U32(ctx, 5));
label_122f3c:
    // 0x122f3c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x122f3cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_122f40:
    // 0x122f40: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x122f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_122f44:
    // 0x122f44: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x122f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_122f48:
    // 0x122f48: 0x7bb204c0  lq          $s2, 0x4C0($sp)
    ctx->pc = 0x122f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_122f4c:
    // 0x122f4c: 0x7bb304d0  lq          $s3, 0x4D0($sp)
    ctx->pc = 0x122f4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_122f50:
    // 0x122f50: 0x7bb404e0  lq          $s4, 0x4E0($sp)
    ctx->pc = 0x122f50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_122f54:
    // 0x122f54: 0x7bb504f0  lq          $s5, 0x4F0($sp)
    ctx->pc = 0x122f54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_122f58:
    // 0x122f58: 0x7bb60500  lq          $s6, 0x500($sp)
    ctx->pc = 0x122f58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_122f5c:
    // 0x122f5c: 0x7bb70510  lq          $s7, 0x510($sp)
    ctx->pc = 0x122f5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_122f60:
    // 0x122f60: 0x7bbe0520  lq          $fp, 0x520($sp)
    ctx->pc = 0x122f60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_122f64:
    // 0x122f64: 0xdfbf0530  ld          $ra, 0x530($sp)
    ctx->pc = 0x122f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
label_122f68:
    // 0x122f68: 0xc7bf0590  lwc1        $f31, 0x590($sp)
    ctx->pc = 0x122f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_122f6c:
    // 0x122f6c: 0xc7be0588  lwc1        $f30, 0x588($sp)
    ctx->pc = 0x122f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_122f70:
    // 0x122f70: 0xc7bd0580  lwc1        $f29, 0x580($sp)
    ctx->pc = 0x122f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_122f74:
    // 0x122f74: 0xc7bc0578  lwc1        $f28, 0x578($sp)
    ctx->pc = 0x122f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_122f78:
    // 0x122f78: 0xc7bb0570  lwc1        $f27, 0x570($sp)
    ctx->pc = 0x122f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_122f7c:
    // 0x122f7c: 0xc7ba0568  lwc1        $f26, 0x568($sp)
    ctx->pc = 0x122f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_122f80:
    // 0x122f80: 0xc7b90560  lwc1        $f25, 0x560($sp)
    ctx->pc = 0x122f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_122f84:
    // 0x122f84: 0xc7b80558  lwc1        $f24, 0x558($sp)
    ctx->pc = 0x122f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_122f88:
    // 0x122f88: 0xc7b70550  lwc1        $f23, 0x550($sp)
    ctx->pc = 0x122f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_122f8c:
    // 0x122f8c: 0xc7b60548  lwc1        $f22, 0x548($sp)
    ctx->pc = 0x122f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_122f90:
    // 0x122f90: 0xc7b50540  lwc1        $f21, 0x540($sp)
    ctx->pc = 0x122f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_122f94:
    // 0x122f94: 0xc7b40538  lwc1        $f20, 0x538($sp)
    ctx->pc = 0x122f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_122f98:
    // 0x122f98: 0x3e00008  jr          $ra
label_122f9c:
    if (ctx->pc == 0x122F9Cu) {
        ctx->pc = 0x122F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F98u;
        // 0x122f9c: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122FA0u;
        goto label_fallthrough_0x122f98;
    }
    ctx->pc = 0x122F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F98u;
        // 0x122f9c: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x122f98:
    ctx->pc = 0x122FA0u;
}
