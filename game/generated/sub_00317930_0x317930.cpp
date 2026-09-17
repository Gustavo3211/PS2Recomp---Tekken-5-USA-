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

// Function: sub_00317930
// Address: 0x317930 - 0x317abc
void sub_00317930_0x317930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317930_0x317930");
#endif

    switch (ctx->pc) {
        case 0x317968u: goto label_317968;
        case 0x317994u: goto label_317994;
        case 0x3179b8u: goto label_3179b8;
        case 0x317a08u: goto label_317a08;
        case 0x317a28u: goto label_317a28;
        case 0x317a84u: goto label_317a84;
        case 0x317aa4u: goto label_317aa4;
        default: break;
    }

    ctx->pc = 0x317930u;

    // 0x317930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x317930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x317934: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x317934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x317938: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x317938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x31793c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x31793cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317940: 0xafc40054  sw          $a0, 0x54($fp)
    ctx->pc = 0x317940u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 4));
    // 0x317944: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x317944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x317948: 0xac404198  sw          $zero, 0x4198($v0)
    ctx->pc = 0x317948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16792), GPR_U32(ctx, 0));
    // 0x31794c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317950: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x317950u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x317954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317958: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x317958u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x31795c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31795cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317960: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x317960u;
    SET_GPR_U32(ctx, 31, 0x317968u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x317960u, 0x317968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317968u;
label_317968:
    // 0x317968: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x317968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x31796c: 0xac624188  sw          $v0, 0x4188($v1)
    ctx->pc = 0x31796cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16776), GPR_U32(ctx, 2));
    // 0x317970: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x317970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x317974: 0x8c6240cc  lw          $v0, 0x40CC($v1)
    ctx->pc = 0x317974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16588)));
    // 0x317978: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x317978u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x31797c: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x31797cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x317980: 0x8c6240cc  lw          $v0, 0x40CC($v1)
    ctx->pc = 0x317980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16588)));
    // 0x317984: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x317984u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x317988: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x317988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31798c: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x31798Cu;
    SET_GPR_U32(ctx, 31, 0x317994u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x31798Cu, 0x317994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317994u;
label_317994:
    // 0x317994: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x317994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x317998: 0xac62418c  sw          $v0, 0x418C($v1)
    ctx->pc = 0x317998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16780), GPR_U32(ctx, 2));
    // 0x31799c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3179a0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3179a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x3179a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3179a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3179a8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3179a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x3179ac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3179acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179b0: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x3179B0u;
    SET_GPR_U32(ctx, 31, 0x3179B8u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x3179B0u, 0x3179B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3179B8u;
label_3179b8:
    // 0x3179b8: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x3179b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x3179bc: 0xac6243c0  sw          $v0, 0x43C0($v1)
    ctx->pc = 0x3179bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17344), GPR_U32(ctx, 2));
    // 0x3179c0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x3179c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x3179c4: 0x24429cd8  addiu       $v0, $v0, -0x6328
    ctx->pc = 0x3179c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941912));
    // 0x3179c8: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x3179c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x3179cc: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x3179ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x3179d0: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x3179d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x3179d4: 0xafc20028  sw          $v0, 0x28($fp)
    ctx->pc = 0x3179d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x3179d8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3179d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3179dc: 0xafc2002c  sw          $v0, 0x2C($fp)
    ctx->pc = 0x3179dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x3179e0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x3179e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x3179e4: 0x24428870  addiu       $v0, $v0, -0x7790
    ctx->pc = 0x3179e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936688));
    // 0x3179e8: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x3179e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x3179ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3179ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3179f0: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x3179f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x3179f4: 0xafc00040  sw          $zero, 0x40($fp)
    ctx->pc = 0x3179f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
    // 0x3179f8: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x3179f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x3179fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3179fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a00: 0xc043c68  jal         func_10F1A0
    ctx->pc = 0x317A00u;
    SET_GPR_U32(ctx, 31, 0x317A08u);
    ctx->pc = 0x10F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1A0u, 0x317A00u, 0x317A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A08u;
label_317a08:
    // 0x317a08: 0xafc20050  sw          $v0, 0x50($fp)
    ctx->pc = 0x317a08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 2));
    // 0x317a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317a10: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x317a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x317a14: 0xac624190  sw          $v0, 0x4190($v1)
    ctx->pc = 0x317a14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16784), GPR_U32(ctx, 2));
    // 0x317a18: 0x8fc40050  lw          $a0, 0x50($fp)
    ctx->pc = 0x317a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x317a1c: 0x8fc50054  lw          $a1, 0x54($fp)
    ctx->pc = 0x317a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x317a20: 0xc044138  jal         func_1104E0
    ctx->pc = 0x317A20u;
    SET_GPR_U32(ctx, 31, 0x317A28u);
    ctx->pc = 0x1104E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E0u, 0x317A20u, 0x317A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A28u;
label_317a28:
    // 0x317a28: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x317a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x317a2c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x317a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x317a30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x317a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x317a34: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x317A34u;
    {
        const bool branch_taken_0x317a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317a34) {
            ctx->pc = 0x317AA4u;
            goto label_317aa4;
        }
    }
    ctx->pc = 0x317A3Cu;
    // 0x317a3c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x317a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x317a40: 0x24429d18  addiu       $v0, $v0, -0x62E8
    ctx->pc = 0x317a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941976));
    // 0x317a44: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x317a44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x317a48: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x317a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x317a4c: 0x246220c0  addiu       $v0, $v1, 0x20C0
    ctx->pc = 0x317a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8384));
    // 0x317a50: 0xafc20028  sw          $v0, 0x28($fp)
    ctx->pc = 0x317a50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x317a54: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x317a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x317a58: 0xafc2002c  sw          $v0, 0x2C($fp)
    ctx->pc = 0x317a58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x317a5c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x317a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x317a60: 0x24428870  addiu       $v0, $v0, -0x7790
    ctx->pc = 0x317a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936688));
    // 0x317a64: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x317a64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x317a68: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x317a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x317a6c: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x317a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x317a70: 0xafc00040  sw          $zero, 0x40($fp)
    ctx->pc = 0x317a70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
    // 0x317a74: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x317a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x317a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317a7c: 0xc043c68  jal         func_10F1A0
    ctx->pc = 0x317A7Cu;
    SET_GPR_U32(ctx, 31, 0x317A84u);
    ctx->pc = 0x10F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1A0u, 0x317A7Cu, 0x317A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A84u;
label_317a84:
    // 0x317a84: 0xafc20050  sw          $v0, 0x50($fp)
    ctx->pc = 0x317a84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 2));
    // 0x317a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317a8c: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x317a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x317a90: 0xac624194  sw          $v0, 0x4194($v1)
    ctx->pc = 0x317a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16788), GPR_U32(ctx, 2));
    // 0x317a94: 0x8fc40050  lw          $a0, 0x50($fp)
    ctx->pc = 0x317a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x317a98: 0x8fc50054  lw          $a1, 0x54($fp)
    ctx->pc = 0x317a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x317a9c: 0xc044138  jal         func_1104E0
    ctx->pc = 0x317A9Cu;
    SET_GPR_U32(ctx, 31, 0x317AA4u);
    ctx->pc = 0x1104E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E0u, 0x317A9Cu, 0x317AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317AA4u;
label_317aa4:
    // 0x317aa4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x317aa4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317aa8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x317aa8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x317aac: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x317aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x317ab0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x317ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x317ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x317AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317ABCu;
}
