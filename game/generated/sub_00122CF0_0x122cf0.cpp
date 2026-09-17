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

// Function: sub_00122CF0
// Address: 0x122cf0 - 0x122d78
void sub_00122CF0_0x122cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122CF0_0x122cf0");
#endif

    switch (ctx->pc) {
        case 0x122cf0u: goto label_122cf0;
        case 0x122cf4u: goto label_122cf4;
        case 0x122cf8u: goto label_122cf8;
        case 0x122cfcu: goto label_122cfc;
        case 0x122d00u: goto label_122d00;
        case 0x122d04u: goto label_122d04;
        case 0x122d08u: goto label_122d08;
        case 0x122d0cu: goto label_122d0c;
        case 0x122d10u: goto label_122d10;
        case 0x122d14u: goto label_122d14;
        case 0x122d18u: goto label_122d18;
        case 0x122d1cu: goto label_122d1c;
        case 0x122d20u: goto label_122d20;
        case 0x122d24u: goto label_122d24;
        case 0x122d28u: goto label_122d28;
        case 0x122d2cu: goto label_122d2c;
        case 0x122d30u: goto label_122d30;
        case 0x122d34u: goto label_122d34;
        case 0x122d38u: goto label_122d38;
        case 0x122d3cu: goto label_122d3c;
        case 0x122d40u: goto label_122d40;
        case 0x122d44u: goto label_122d44;
        case 0x122d48u: goto label_122d48;
        case 0x122d4cu: goto label_122d4c;
        case 0x122d50u: goto label_122d50;
        case 0x122d54u: goto label_122d54;
        case 0x122d58u: goto label_122d58;
        case 0x122d5cu: goto label_122d5c;
        case 0x122d60u: goto label_122d60;
        case 0x122d64u: goto label_122d64;
        case 0x122d68u: goto label_122d68;
        case 0x122d6cu: goto label_122d6c;
        case 0x122d70u: goto label_122d70;
        case 0x122d74u: goto label_122d74;
        default: break;
    }

    ctx->pc = 0x122cf0u;

label_122cf0:
    // 0x122cf0: 0x27bdfa70  addiu       $sp, $sp, -0x590
    ctx->pc = 0x122cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965872));
label_122cf4:
    // 0x122cf4: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x122cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
label_122cf8:
    // 0x122cf8: 0x7fbe0510  sq          $fp, 0x510($sp)
    ctx->pc = 0x122cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 30));
label_122cfc:
    // 0x122cfc: 0x7fb00490  sq          $s0, 0x490($sp)
    ctx->pc = 0x122cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 16));
label_122d00:
    // 0x122d00: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x122d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_122d04:
    // 0x122d04: 0x7fb204b0  sq          $s2, 0x4B0($sp)
    ctx->pc = 0x122d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 18));
label_122d08:
    // 0x122d08: 0x7fb304c0  sq          $s3, 0x4C0($sp)
    ctx->pc = 0x122d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 19));
label_122d0c:
    // 0x122d0c: 0x7fb404d0  sq          $s4, 0x4D0($sp)
    ctx->pc = 0x122d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 20));
label_122d10:
    // 0x122d10: 0x7fb504e0  sq          $s5, 0x4E0($sp)
    ctx->pc = 0x122d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 21));
label_122d14:
    // 0x122d14: 0x7fb604f0  sq          $s6, 0x4F0($sp)
    ctx->pc = 0x122d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 22));
label_122d18:
    // 0x122d18: 0x7fb70500  sq          $s7, 0x500($sp)
    ctx->pc = 0x122d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 23));
label_122d1c:
    // 0x122d1c: 0xffbf0520  sd          $ra, 0x520($sp)
    ctx->pc = 0x122d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1312), GPR_U64(ctx, 31));
label_122d20:
    // 0x122d20: 0xe7bf0580  swc1        $f31, 0x580($sp)
    ctx->pc = 0x122d20u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_122d24:
    // 0x122d24: 0xe7be0578  swc1        $f30, 0x578($sp)
    ctx->pc = 0x122d24u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
label_122d28:
    // 0x122d28: 0xe7bd0570  swc1        $f29, 0x570($sp)
    ctx->pc = 0x122d28u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_122d2c:
    // 0x122d2c: 0xe7bc0568  swc1        $f28, 0x568($sp)
    ctx->pc = 0x122d2cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1384), bits); }
label_122d30:
    // 0x122d30: 0xe7bb0560  swc1        $f27, 0x560($sp)
    ctx->pc = 0x122d30u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_122d34:
    // 0x122d34: 0xe7ba0558  swc1        $f26, 0x558($sp)
    ctx->pc = 0x122d34u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
label_122d38:
    // 0x122d38: 0xe7b90550  swc1        $f25, 0x550($sp)
    ctx->pc = 0x122d38u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_122d3c:
    // 0x122d3c: 0xe7b80548  swc1        $f24, 0x548($sp)
    ctx->pc = 0x122d3cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1352), bits); }
label_122d40:
    // 0x122d40: 0xe7b70540  swc1        $f23, 0x540($sp)
    ctx->pc = 0x122d40u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_122d44:
    // 0x122d44: 0xe7b60538  swc1        $f22, 0x538($sp)
    ctx->pc = 0x122d44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
label_122d48:
    // 0x122d48: 0xe7b50530  swc1        $f21, 0x530($sp)
    ctx->pc = 0x122d48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
label_122d4c:
    // 0x122d4c: 0xe7b40528  swc1        $f20, 0x528($sp)
    ctx->pc = 0x122d4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_122d50:
    // 0x122d50: 0x8c624380  lw          $v0, 0x4380($v1)
    ctx->pc = 0x122d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17280)));
label_122d54:
    // 0x122d54: 0x40f809  jalr        $v0
label_122d58:
    if (ctx->pc == 0x122D58u) {
        ctx->pc = 0x122D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D54u;
        // 0x122d58: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D5Cu;
        goto label_122d5c;
    }
    ctx->pc = 0x122D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122D5Cu);
        ctx->pc = 0x122D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D54u;
        // 0x122d58: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122D54u, 0x122D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122D5Cu;
label_122d5c:
    // 0x122d5c: 0xafde048c  sw          $fp, 0x48C($fp)
    ctx->pc = 0x122d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1164), GPR_U32(ctx, 30));
label_122d60:
    // 0x122d60: 0xafc20488  sw          $v0, 0x488($fp)
    ctx->pc = 0x122d60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1160), GPR_U32(ctx, 2));
label_122d64:
    // 0x122d64: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x122d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_122d68:
    // 0x122d68: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_122d6c:
    if (ctx->pc == 0x122D6Cu) {
        ctx->pc = 0x122D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D68u;
        // 0x122d6c: 0x3c020012  lui         $v0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D70u;
        goto label_122d70;
    }
    ctx->pc = 0x122D68u;
    {
        const bool branch_taken_0x122d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122d68) {
            ctx->pc = 0x122D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122D68u;
            // 0x122d6c: 0x3c020012  lui         $v0, 0x12 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122D7Cu;
            return;
        }
    }
    ctx->pc = 0x122D70u;
label_122d70:
    // 0x122d70: 0xc048724  jal         func_121C90
label_122d74:
    if (ctx->pc == 0x122D74u) {
        ctx->pc = 0x122D78u;
        goto label_fallthrough_0x122d70;
    }
    ctx->pc = 0x122D70u;
    SET_GPR_U32(ctx, 31, 0x122D78u);
    ctx->pc = 0x121C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C90u, 0x122D70u, 0x122D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x122d70:
    ctx->pc = 0x122D78u;
}
