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

// Function: sub_00122E40
// Address: 0x122e40 - 0x122ed8
void sub_00122E40_0x122e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122E40_0x122e40");
#endif

    switch (ctx->pc) {
        case 0x122e40u: goto label_122e40;
        case 0x122e44u: goto label_122e44;
        case 0x122e48u: goto label_122e48;
        case 0x122e4cu: goto label_122e4c;
        case 0x122e50u: goto label_122e50;
        case 0x122e54u: goto label_122e54;
        case 0x122e58u: goto label_122e58;
        case 0x122e5cu: goto label_122e5c;
        case 0x122e60u: goto label_122e60;
        case 0x122e64u: goto label_122e64;
        case 0x122e68u: goto label_122e68;
        case 0x122e6cu: goto label_122e6c;
        case 0x122e70u: goto label_122e70;
        case 0x122e74u: goto label_122e74;
        case 0x122e78u: goto label_122e78;
        case 0x122e7cu: goto label_122e7c;
        case 0x122e80u: goto label_122e80;
        case 0x122e84u: goto label_122e84;
        case 0x122e88u: goto label_122e88;
        case 0x122e8cu: goto label_122e8c;
        case 0x122e90u: goto label_122e90;
        case 0x122e94u: goto label_122e94;
        case 0x122e98u: goto label_122e98;
        case 0x122e9cu: goto label_122e9c;
        case 0x122ea0u: goto label_122ea0;
        case 0x122ea4u: goto label_122ea4;
        case 0x122ea8u: goto label_122ea8;
        case 0x122eacu: goto label_122eac;
        case 0x122eb0u: goto label_122eb0;
        case 0x122eb4u: goto label_122eb4;
        case 0x122eb8u: goto label_122eb8;
        case 0x122ebcu: goto label_122ebc;
        case 0x122ec0u: goto label_122ec0;
        case 0x122ec4u: goto label_122ec4;
        case 0x122ec8u: goto label_122ec8;
        case 0x122eccu: goto label_122ecc;
        case 0x122ed0u: goto label_122ed0;
        case 0x122ed4u: goto label_122ed4;
        default: break;
    }

    ctx->pc = 0x122e40u;

label_122e40:
    // 0x122e40: 0x27bdfa60  addiu       $sp, $sp, -0x5A0
    ctx->pc = 0x122e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965856));
label_122e44:
    // 0x122e44: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x122e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
label_122e48:
    // 0x122e48: 0x7fbe0520  sq          $fp, 0x520($sp)
    ctx->pc = 0x122e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 30));
label_122e4c:
    // 0x122e4c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x122e4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122e50:
    // 0x122e50: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x122e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
label_122e54:
    // 0x122e54: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x122e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
label_122e58:
    // 0x122e58: 0x7fb204c0  sq          $s2, 0x4C0($sp)
    ctx->pc = 0x122e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 18));
label_122e5c:
    // 0x122e5c: 0x7fb304d0  sq          $s3, 0x4D0($sp)
    ctx->pc = 0x122e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 19));
label_122e60:
    // 0x122e60: 0x7fb404e0  sq          $s4, 0x4E0($sp)
    ctx->pc = 0x122e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 20));
label_122e64:
    // 0x122e64: 0x7fb504f0  sq          $s5, 0x4F0($sp)
    ctx->pc = 0x122e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 21));
label_122e68:
    // 0x122e68: 0x7fb60500  sq          $s6, 0x500($sp)
    ctx->pc = 0x122e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 22));
label_122e6c:
    // 0x122e6c: 0x7fb70510  sq          $s7, 0x510($sp)
    ctx->pc = 0x122e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 23));
label_122e70:
    // 0x122e70: 0xffbf0530  sd          $ra, 0x530($sp)
    ctx->pc = 0x122e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1328), GPR_U64(ctx, 31));
label_122e74:
    // 0x122e74: 0xe7bf0590  swc1        $f31, 0x590($sp)
    ctx->pc = 0x122e74u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_122e78:
    // 0x122e78: 0xe7be0588  swc1        $f30, 0x588($sp)
    ctx->pc = 0x122e78u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_122e7c:
    // 0x122e7c: 0xe7bd0580  swc1        $f29, 0x580($sp)
    ctx->pc = 0x122e7cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_122e80:
    // 0x122e80: 0xe7bc0578  swc1        $f28, 0x578($sp)
    ctx->pc = 0x122e80u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
label_122e84:
    // 0x122e84: 0xe7bb0570  swc1        $f27, 0x570($sp)
    ctx->pc = 0x122e84u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_122e88:
    // 0x122e88: 0xe7ba0568  swc1        $f26, 0x568($sp)
    ctx->pc = 0x122e88u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1384), bits); }
label_122e8c:
    // 0x122e8c: 0xe7b90560  swc1        $f25, 0x560($sp)
    ctx->pc = 0x122e8cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_122e90:
    // 0x122e90: 0xe7b80558  swc1        $f24, 0x558($sp)
    ctx->pc = 0x122e90u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
label_122e94:
    // 0x122e94: 0xe7b70550  swc1        $f23, 0x550($sp)
    ctx->pc = 0x122e94u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_122e98:
    // 0x122e98: 0xe7b60548  swc1        $f22, 0x548($sp)
    ctx->pc = 0x122e98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1352), bits); }
label_122e9c:
    // 0x122e9c: 0xe7b50540  swc1        $f21, 0x540($sp)
    ctx->pc = 0x122e9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_122ea0:
    // 0x122ea0: 0xe7b40538  swc1        $f20, 0x538($sp)
    ctx->pc = 0x122ea0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
label_122ea4:
    // 0x122ea4: 0xafc40488  sw          $a0, 0x488($fp)
    ctx->pc = 0x122ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1160), GPR_U32(ctx, 4));
label_122ea8:
    // 0x122ea8: 0x8c624380  lw          $v0, 0x4380($v1)
    ctx->pc = 0x122ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17280)));
label_122eac:
    // 0x122eac: 0x40f809  jalr        $v0
label_122eb0:
    if (ctx->pc == 0x122EB0u) {
        ctx->pc = 0x122EB4u;
        goto label_122eb4;
    }
    ctx->pc = 0x122EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122EB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122EACu, 0x122EB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122EB4u;
label_122eb4:
    // 0x122eb4: 0xafde0490  sw          $fp, 0x490($fp)
    ctx->pc = 0x122eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1168), GPR_U32(ctx, 30));
label_122eb8:
    // 0x122eb8: 0xafc2048c  sw          $v0, 0x48C($fp)
    ctx->pc = 0x122eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1164), GPR_U32(ctx, 2));
label_122ebc:
    // 0x122ebc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x122ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_122ec0:
    // 0x122ec0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_122ec4:
    if (ctx->pc == 0x122EC4u) {
        ctx->pc = 0x122EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EC0u;
        // 0x122ec4: 0x8fc30488  lw          $v1, 0x488($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122EC8u;
        goto label_122ec8;
    }
    ctx->pc = 0x122EC0u;
    {
        const bool branch_taken_0x122ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EC0u;
        // 0x122ec4: 0x8fc30488  lw          $v1, 0x488($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ec0) {
            ctx->pc = 0x122ED0u;
            goto label_122ed0;
        }
    }
    ctx->pc = 0x122EC8u;
label_122ec8:
    // 0x122ec8: 0xc048724  jal         func_121C90
label_122ecc:
    if (ctx->pc == 0x122ECCu) {
        ctx->pc = 0x122ED0u;
        goto label_122ed0;
    }
    ctx->pc = 0x122EC8u;
    SET_GPR_U32(ctx, 31, 0x122ED0u);
    ctx->pc = 0x121C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C90u, 0x122EC8u, 0x122ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122ED0u;
label_122ed0:
    // 0x122ed0: 0x8fc2048c  lw          $v0, 0x48C($fp)
    ctx->pc = 0x122ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_122ed4:
    // 0x122ed4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x122ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x122ed8u;
}
