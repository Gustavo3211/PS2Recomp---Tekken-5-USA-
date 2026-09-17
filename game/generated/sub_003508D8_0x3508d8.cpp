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

// Function: sub_003508D8
// Address: 0x3508d8 - 0x350a5c
void sub_003508D8_0x3508d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003508D8_0x3508d8");
#endif

    switch (ctx->pc) {
        case 0x3508d8u: goto label_3508d8;
        case 0x3508dcu: goto label_3508dc;
        case 0x3508e0u: goto label_3508e0;
        case 0x3508e4u: goto label_3508e4;
        case 0x3508e8u: goto label_3508e8;
        case 0x3508ecu: goto label_3508ec;
        case 0x3508f0u: goto label_3508f0;
        case 0x3508f4u: goto label_3508f4;
        case 0x3508f8u: goto label_3508f8;
        case 0x3508fcu: goto label_3508fc;
        case 0x350900u: goto label_350900;
        case 0x350904u: goto label_350904;
        case 0x350908u: goto label_350908;
        case 0x35090cu: goto label_35090c;
        case 0x350910u: goto label_350910;
        case 0x350914u: goto label_350914;
        case 0x350918u: goto label_350918;
        case 0x35091cu: goto label_35091c;
        case 0x350920u: goto label_350920;
        case 0x350924u: goto label_350924;
        case 0x350928u: goto label_350928;
        case 0x35092cu: goto label_35092c;
        case 0x350930u: goto label_350930;
        case 0x350934u: goto label_350934;
        case 0x350938u: goto label_350938;
        case 0x35093cu: goto label_35093c;
        case 0x350940u: goto label_350940;
        case 0x350944u: goto label_350944;
        case 0x350948u: goto label_350948;
        case 0x35094cu: goto label_35094c;
        case 0x350950u: goto label_350950;
        case 0x350954u: goto label_350954;
        case 0x350958u: goto label_350958;
        case 0x35095cu: goto label_35095c;
        case 0x350960u: goto label_350960;
        case 0x350964u: goto label_350964;
        case 0x350968u: goto label_350968;
        case 0x35096cu: goto label_35096c;
        case 0x350970u: goto label_350970;
        case 0x350974u: goto label_350974;
        case 0x350978u: goto label_350978;
        case 0x35097cu: goto label_35097c;
        case 0x350980u: goto label_350980;
        case 0x350984u: goto label_350984;
        case 0x350988u: goto label_350988;
        case 0x35098cu: goto label_35098c;
        case 0x350990u: goto label_350990;
        case 0x350994u: goto label_350994;
        case 0x350998u: goto label_350998;
        case 0x35099cu: goto label_35099c;
        case 0x3509a0u: goto label_3509a0;
        case 0x3509a4u: goto label_3509a4;
        case 0x3509a8u: goto label_3509a8;
        case 0x3509acu: goto label_3509ac;
        case 0x3509b0u: goto label_3509b0;
        case 0x3509b4u: goto label_3509b4;
        case 0x3509b8u: goto label_3509b8;
        case 0x3509bcu: goto label_3509bc;
        case 0x3509c0u: goto label_3509c0;
        case 0x3509c4u: goto label_3509c4;
        case 0x3509c8u: goto label_3509c8;
        case 0x3509ccu: goto label_3509cc;
        case 0x3509d0u: goto label_3509d0;
        case 0x3509d4u: goto label_3509d4;
        case 0x3509d8u: goto label_3509d8;
        case 0x3509dcu: goto label_3509dc;
        case 0x3509e0u: goto label_3509e0;
        case 0x3509e4u: goto label_3509e4;
        case 0x3509e8u: goto label_3509e8;
        case 0x3509ecu: goto label_3509ec;
        case 0x3509f0u: goto label_3509f0;
        case 0x3509f4u: goto label_3509f4;
        case 0x3509f8u: goto label_3509f8;
        case 0x3509fcu: goto label_3509fc;
        case 0x350a00u: goto label_350a00;
        case 0x350a04u: goto label_350a04;
        case 0x350a08u: goto label_350a08;
        case 0x350a0cu: goto label_350a0c;
        case 0x350a10u: goto label_350a10;
        case 0x350a14u: goto label_350a14;
        case 0x350a18u: goto label_350a18;
        case 0x350a1cu: goto label_350a1c;
        case 0x350a20u: goto label_350a20;
        case 0x350a24u: goto label_350a24;
        case 0x350a28u: goto label_350a28;
        case 0x350a2cu: goto label_350a2c;
        case 0x350a30u: goto label_350a30;
        case 0x350a34u: goto label_350a34;
        case 0x350a38u: goto label_350a38;
        case 0x350a3cu: goto label_350a3c;
        case 0x350a40u: goto label_350a40;
        case 0x350a44u: goto label_350a44;
        case 0x350a48u: goto label_350a48;
        case 0x350a4cu: goto label_350a4c;
        case 0x350a50u: goto label_350a50;
        case 0x350a54u: goto label_350a54;
        case 0x350a58u: goto label_350a58;
        default: break;
    }

    ctx->pc = 0x3508d8u;

label_3508d8:
    // 0x3508d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3508d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3508dc:
    // 0x3508dc: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3508dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_3508e0:
    // 0x3508e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3508e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3508e4:
    // 0x3508e4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3508e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3508e8:
    // 0x3508e8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3508e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3508ec:
    // 0x3508ec: 0x8f84cbc8  lw          $a0, -0x3438($gp)
    ctx->pc = 0x3508ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953928)));
label_3508f0:
    // 0x3508f0: 0xc043cf8  jal         func_10F3E0
label_3508f4:
    if (ctx->pc == 0x3508F4u) {
        ctx->pc = 0x3508F8u;
        goto label_3508f8;
    }
    ctx->pc = 0x3508F0u;
    SET_GPR_U32(ctx, 31, 0x3508F8u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3508F0u, 0x3508F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508F8u;
label_3508f8:
    // 0x3508f8: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x3508f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
label_3508fc:
    // 0x3508fc: 0xc043cf8  jal         func_10F3E0
label_350900:
    if (ctx->pc == 0x350900u) {
        ctx->pc = 0x350904u;
        goto label_350904;
    }
    ctx->pc = 0x3508FCu;
    SET_GPR_U32(ctx, 31, 0x350904u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3508FCu, 0x350904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350904u;
label_350904:
    // 0x350904: 0x8f82cbd8  lw          $v0, -0x3428($gp)
    ctx->pc = 0x350904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953944)));
label_350908:
    // 0x350908: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x350908u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_35090c:
    // 0x35090c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_350910:
    // 0x350910: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_350914:
    if (ctx->pc == 0x350914u) {
        ctx->pc = 0x350918u;
        goto label_350918;
    }
    ctx->pc = 0x350910u;
    {
        const bool branch_taken_0x350910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350910) {
            ctx->pc = 0x35092Cu;
            goto label_35092c;
        }
    }
    ctx->pc = 0x350918u;
label_350918:
    // 0x350918: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x350918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
label_35091c:
    // 0x35091c: 0xc043cf0  jal         func_10F3C0
label_350920:
    if (ctx->pc == 0x350920u) {
        ctx->pc = 0x350924u;
        goto label_350924;
    }
    ctx->pc = 0x35091Cu;
    SET_GPR_U32(ctx, 31, 0x350924u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x35091Cu, 0x350924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350924u;
label_350924:
    // 0x350924: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_350928:
    if (ctx->pc == 0x350928u) {
        ctx->pc = 0x35092Cu;
        goto label_35092c;
    }
    ctx->pc = 0x350924u;
    {
        const bool branch_taken_0x350924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350924) {
            ctx->pc = 0x3508ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3508ec;
        }
    }
    ctx->pc = 0x35092Cu;
label_35092c:
    // 0x35092c: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x35092cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
label_350930:
    // 0x350930: 0xc043cf0  jal         func_10F3C0
label_350934:
    if (ctx->pc == 0x350934u) {
        ctx->pc = 0x350938u;
        goto label_350938;
    }
    ctx->pc = 0x350930u;
    SET_GPR_U32(ctx, 31, 0x350938u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x350930u, 0x350938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350938u;
label_350938:
    // 0x350938: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35093c:
    // 0x35093c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_350940:
    // 0x350940: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_350944:
    if (ctx->pc == 0x350944u) {
        ctx->pc = 0x350948u;
        goto label_350948;
    }
    ctx->pc = 0x350940u;
    {
        const bool branch_taken_0x350940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350940) {
            ctx->pc = 0x35097Cu;
            goto label_35097c;
        }
    }
    ctx->pc = 0x350948u;
label_350948:
    // 0x350948: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x350948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
label_35094c:
    // 0x35094c: 0xc043cec  jal         func_10F3B0
label_350950:
    if (ctx->pc == 0x350950u) {
        ctx->pc = 0x350954u;
        goto label_350954;
    }
    ctx->pc = 0x35094Cu;
    SET_GPR_U32(ctx, 31, 0x350954u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x35094Cu, 0x350954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350954u;
label_350954:
    // 0x350954: 0x8f84cbc8  lw          $a0, -0x3438($gp)
    ctx->pc = 0x350954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953928)));
label_350958:
    // 0x350958: 0xc043cec  jal         func_10F3B0
label_35095c:
    if (ctx->pc == 0x35095Cu) {
        ctx->pc = 0x350960u;
        goto label_350960;
    }
    ctx->pc = 0x350958u;
    SET_GPR_U32(ctx, 31, 0x350960u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x350958u, 0x350960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350960u;
label_350960:
    // 0x350960: 0x8f84cbd0  lw          $a0, -0x3430($gp)
    ctx->pc = 0x350960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953936)));
label_350964:
    // 0x350964: 0xc043cf0  jal         func_10F3C0
label_350968:
    if (ctx->pc == 0x350968u) {
        ctx->pc = 0x35096Cu;
        goto label_35096c;
    }
    ctx->pc = 0x350964u;
    SET_GPR_U32(ctx, 31, 0x35096Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x350964u, 0x35096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35096Cu;
label_35096c:
    // 0x35096c: 0xc043c78  jal         func_10F1E0
label_350970:
    if (ctx->pc == 0x350970u) {
        ctx->pc = 0x350974u;
        goto label_350974;
    }
    ctx->pc = 0x35096Cu;
    SET_GPR_U32(ctx, 31, 0x350974u);
    ctx->pc = 0x10F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E0u, 0x35096Cu, 0x350974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350974u;
label_350974:
    // 0x350974: 0x10000033  b           . + 4 + (0x33 << 2)
label_350978:
    if (ctx->pc == 0x350978u) {
        ctx->pc = 0x35097Cu;
        goto label_35097c;
    }
    ctx->pc = 0x350974u;
    {
        const bool branch_taken_0x350974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350974) {
            ctx->pc = 0x350A44u;
            goto label_350a44;
        }
    }
    ctx->pc = 0x35097Cu;
label_35097c:
    // 0x35097c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_350980:
    // 0x350980: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x350980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_350984:
    // 0x350984: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x350984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_350988:
    // 0x350988: 0x40f809  jalr        $v0
label_35098c:
    if (ctx->pc == 0x35098Cu) {
        ctx->pc = 0x350990u;
        goto label_350990;
    }
    ctx->pc = 0x350988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x350990u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350988u, 0x350990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x350990u;
label_350990:
    // 0x350990: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x350990u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_350994:
    // 0x350994: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x350994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_350998:
    // 0x350998: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x350998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35099c:
    // 0x35099c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3509a0:
    if (ctx->pc == 0x3509A0u) {
        ctx->pc = 0x3509A4u;
        goto label_3509a4;
    }
    ctx->pc = 0x35099Cu;
    {
        const bool branch_taken_0x35099c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35099c) {
            ctx->pc = 0x3509ACu;
            goto label_3509ac;
        }
    }
    ctx->pc = 0x3509A4u;
label_3509a4:
    // 0x3509a4: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
label_3509a8:
    if (ctx->pc == 0x3509A8u) {
        ctx->pc = 0x3509ACu;
        goto label_3509ac;
    }
    ctx->pc = 0x3509A4u;
    {
        const bool branch_taken_0x3509a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3509a4) {
            ctx->pc = 0x3508F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3508f8;
        }
    }
    ctx->pc = 0x3509ACu;
label_3509ac:
    // 0x3509ac: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x3509acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
label_3509b0:
    // 0x3509b0: 0xc043cf8  jal         func_10F3E0
label_3509b4:
    if (ctx->pc == 0x3509B4u) {
        ctx->pc = 0x3509B8u;
        goto label_3509b8;
    }
    ctx->pc = 0x3509B0u;
    SET_GPR_U32(ctx, 31, 0x3509B8u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3509B0u, 0x3509B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3509B8u;
label_3509b8:
    // 0x3509b8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3509b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3509bc:
    // 0x3509bc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3509bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3509c0:
    // 0x3509c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3509c4:
    if (ctx->pc == 0x3509C4u) {
        ctx->pc = 0x3509C8u;
        goto label_3509c8;
    }
    ctx->pc = 0x3509C0u;
    {
        const bool branch_taken_0x3509c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3509c0) {
            ctx->pc = 0x3509DCu;
            goto label_3509dc;
        }
    }
    ctx->pc = 0x3509C8u;
label_3509c8:
    // 0x3509c8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3509c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3509cc:
    // 0x3509cc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3509ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3509d0:
    // 0x3509d0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3509d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3509d4:
    // 0x3509d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3509d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3509d8:
    // 0x3509d8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x3509d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_3509dc:
    // 0x3509dc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3509dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3509e0:
    // 0x3509e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3509e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3509e4:
    // 0x3509e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3509e8:
    if (ctx->pc == 0x3509E8u) {
        ctx->pc = 0x3509ECu;
        goto label_3509ec;
    }
    ctx->pc = 0x3509E4u;
    {
        const bool branch_taken_0x3509e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3509e4) {
            ctx->pc = 0x350A00u;
            goto label_350a00;
        }
    }
    ctx->pc = 0x3509ECu;
label_3509ec:
    // 0x3509ec: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3509ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3509f0:
    // 0x3509f0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3509f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3509f4:
    // 0x3509f4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3509f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3509f8:
    // 0x3509f8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3509f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3509fc:
    // 0x3509fc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3509fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_350a00:
    // 0x350a00: 0x8f83cbd8  lw          $v1, -0x3428($gp)
    ctx->pc = 0x350a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953944)));
label_350a04:
    // 0x350a04: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_350a08:
    // 0x350a08: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_350a0c:
    if (ctx->pc == 0x350A0Cu) {
        ctx->pc = 0x350A10u;
        goto label_350a10;
    }
    ctx->pc = 0x350A08u;
    {
        const bool branch_taken_0x350a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x350a08) {
            ctx->pc = 0x350A1Cu;
            goto label_350a1c;
        }
    }
    ctx->pc = 0x350A10u;
label_350a10:
    // 0x350a10: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_350a14:
    // 0x350a14: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x350a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_350a18:
    // 0x350a18: 0xaf82cbd8  sw          $v0, -0x3428($gp)
    ctx->pc = 0x350a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953944), GPR_U32(ctx, 2));
label_350a1c:
    // 0x350a1c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_350a20:
    // 0x350a20: 0x8f83cbdc  lw          $v1, -0x3424($gp)
    ctx->pc = 0x350a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953948)));
label_350a24:
    // 0x350a24: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x350a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_350a28:
    // 0x350a28: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_350a2c:
    // 0x350a2c: 0xaf82cbdc  sw          $v0, -0x3424($gp)
    ctx->pc = 0x350a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953948), GPR_U32(ctx, 2));
label_350a30:
    // 0x350a30: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x350a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
label_350a34:
    // 0x350a34: 0xc043cf0  jal         func_10F3C0
label_350a38:
    if (ctx->pc == 0x350A38u) {
        ctx->pc = 0x350A3Cu;
        goto label_350a3c;
    }
    ctx->pc = 0x350A34u;
    SET_GPR_U32(ctx, 31, 0x350A3Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x350A34u, 0x350A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A3Cu;
label_350a3c:
    // 0x350a3c: 0x1000ffae  b           . + 4 + (-0x52 << 2)
label_350a40:
    if (ctx->pc == 0x350A40u) {
        ctx->pc = 0x350A44u;
        goto label_350a44;
    }
    ctx->pc = 0x350A3Cu;
    {
        const bool branch_taken_0x350a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350a3c) {
            ctx->pc = 0x3508F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3508f8;
        }
    }
    ctx->pc = 0x350A44u;
label_350a44:
    // 0x350a44: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350a44u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_350a48:
    // 0x350a48: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x350a48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_350a4c:
    // 0x350a4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x350a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_350a50:
    // 0x350a50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x350a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_350a54:
    // 0x350a54: 0x3e00008  jr          $ra
label_350a58:
    if (ctx->pc == 0x350A58u) {
        ctx->pc = 0x350A5Cu;
        goto label_fallthrough_0x350a54;
    }
    ctx->pc = 0x350A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x350a54:
    ctx->pc = 0x350A5Cu;
}
