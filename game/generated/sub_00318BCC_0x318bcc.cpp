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

// Function: sub_00318BCC
// Address: 0x318bcc - 0x318d54
void sub_00318BCC_0x318bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318BCC_0x318bcc");
#endif

    switch (ctx->pc) {
        case 0x318bf0u: goto label_318bf0;
        case 0x318c04u: goto label_318c04;
        case 0x318c18u: goto label_318c18;
        case 0x318c34u: goto label_318c34;
        case 0x318c54u: goto label_318c54;
        case 0x318c70u: goto label_318c70;
        case 0x318ca0u: goto label_318ca0;
        case 0x318cb0u: goto label_318cb0;
        case 0x318cccu: goto label_318ccc;
        default: break;
    }

    ctx->pc = 0x318bccu;

    // 0x318bcc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x318bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x318bd0: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x318bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x318bd4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x318bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x318bd8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x318bd8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318bdc: 0xafc40010  sw          $a0, 0x10($fp)
    ctx->pc = 0x318bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 4));
    // 0x318be0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x318be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318be4: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x318be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x318be8: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x318BE8u;
    SET_GPR_U32(ctx, 31, 0x318BF0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x318BE8u, 0x318BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BF0u;
label_318bf0:
    // 0x318bf0: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x318bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318bf4: 0x246240f8  addiu       $v0, $v1, 0x40F8
    ctx->pc = 0x318bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16632));
    // 0x318bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318bfc: 0xc0dcdf1  jal         func_3737C4
    ctx->pc = 0x318BFCu;
    SET_GPR_U32(ctx, 31, 0x318C04u);
    ctx->pc = 0x3737C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737C4u, 0x318BFCu, 0x318C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C04u;
label_318c04:
    // 0x318c04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x318C04u;
    {
        const bool branch_taken_0x318c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c04) {
            ctx->pc = 0x318C40u;
            goto label_318c40;
        }
    }
    ctx->pc = 0x318C0Cu;
    // 0x318c0c: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x318c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318c10: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x318C10u;
    SET_GPR_U32(ctx, 31, 0x318C18u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x318C10u, 0x318C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C18u;
label_318c18:
    // 0x318c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318c1c: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x318c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318c20: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x318c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x318c24: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x318c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318c28: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x318c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x318c2c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x318C2Cu;
    SET_GPR_U32(ctx, 31, 0x318C34u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x318C2Cu, 0x318C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C34u;
label_318c34:
    // 0x318c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318c38: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x318C38u;
    {
        const bool branch_taken_0x318c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c38) {
            ctx->pc = 0x318D3Cu;
            goto label_318d3c;
        }
    }
    ctx->pc = 0x318C40u;
label_318c40:
    // 0x318c40: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x318c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318c44: 0x246240f8  addiu       $v0, $v1, 0x40F8
    ctx->pc = 0x318c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16632));
    // 0x318c48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318c4c: 0xc0dce65  jal         func_373994
    ctx->pc = 0x318C4Cu;
    SET_GPR_U32(ctx, 31, 0x318C54u);
    ctx->pc = 0x373994u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373994u, 0x318C4Cu, 0x318C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C54u;
label_318c54:
    // 0x318c54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x318c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318c58: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x318c58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x318c5c: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x318c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318c60: 0x248240f8  addiu       $v0, $a0, 0x40F8
    ctx->pc = 0x318c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16632));
    // 0x318c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318c68: 0xc0dce70  jal         func_3739C0
    ctx->pc = 0x318C68u;
    SET_GPR_U32(ctx, 31, 0x318C70u);
    ctx->pc = 0x3739C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3739C0u, 0x318C68u, 0x318C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C70u;
label_318c70:
    // 0x318c70: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x318c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318c74: 0x8c6240d0  lw          $v0, 0x40D0($v1)
    ctx->pc = 0x318c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16592)));
    // 0x318c78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x318C78u;
    {
        const bool branch_taken_0x318c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c78) {
            ctx->pc = 0x318CB0u;
            goto label_318cb0;
        }
    }
    ctx->pc = 0x318C80u;
    // 0x318c80: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x318c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318c84: 0x248240d4  addiu       $v0, $a0, 0x40D4
    ctx->pc = 0x318c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16596));
    // 0x318c88: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x318c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318c8c: 0x248340d0  addiu       $v1, $a0, 0x40D0
    ctx->pc = 0x318c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    // 0x318c90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318c94: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x318c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318c98: 0xc0dcdd5  jal         func_373754
    ctx->pc = 0x318C98u;
    SET_GPR_U32(ctx, 31, 0x318CA0u);
    ctx->pc = 0x373754u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373754u, 0x318C98u, 0x318CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CA0u;
label_318ca0:
    // 0x318ca0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x318ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318ca4: 0x8c44418c  lw          $a0, 0x418C($v0)
    ctx->pc = 0x318ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16780)));
    // 0x318ca8: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x318CA8u;
    SET_GPR_U32(ctx, 31, 0x318CB0u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x318CA8u, 0x318CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CB0u;
label_318cb0:
    // 0x318cb0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x318cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318cb4: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x318cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318cb8: 0xac6240d0  sw          $v0, 0x40D0($v1)
    ctx->pc = 0x318cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16592), GPR_U32(ctx, 2));
    // 0x318cbc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x318cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x318cc0: 0x8c444188  lw          $a0, 0x4188($v0)
    ctx->pc = 0x318cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x318cc4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x318CC4u;
    SET_GPR_U32(ctx, 31, 0x318CCCu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x318CC4u, 0x318CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CCCu;
label_318ccc:
    // 0x318ccc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x318cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318cd0: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x318cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x318cd4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x318cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318cd8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x318cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x318cdc: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x318cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x318ce0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318ce4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x318ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x318ce8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x318ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x318cec: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x318cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x318cf0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x318cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x318cf4: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x318cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x318cf8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x318cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x318cfc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x318CFCu;
    {
        const bool branch_taken_0x318cfc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x318cfc) {
            ctx->pc = 0x318D10u;
            goto label_318d10;
        }
    }
    ctx->pc = 0x318D04u;
    // 0x318d04: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x318d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x318d08: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x318d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x318d0c: 0xafc40014  sw          $a0, 0x14($fp)
    ctx->pc = 0x318d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 4));
label_318d10:
    // 0x318d10: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x318d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x318d14: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x318d14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x318d18: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x318d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x318d1c: 0xac22b420  sw          $v0, -0x4BE0($at)
    ctx->pc = 0x318d1cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 2)); // MMIO: 0x1000b420
    // 0x318d20: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x318d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x318d24: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x318d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x318d28: 0xac22b410  sw          $v0, -0x4BF0($at)
    ctx->pc = 0x318d28u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 2)); // MMIO: 0x1000b410
    // 0x318d2c: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x318d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x318d30: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x318d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x318d34: 0xac22b400  sw          $v0, -0x4C00($at)
    ctx->pc = 0x318d34u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2)); // MMIO: 0x1000b400
    // 0x318d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318d3c:
    // 0x318d3c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x318d3cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318d40: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x318d40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318d44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x318d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x318d48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x318d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x318d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x318D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318D54u;
}
