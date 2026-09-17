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

// Function: sub_002FF6B8
// Address: 0x2ff6b8 - 0x2ff858
void sub_002FF6B8_0x2ff6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF6B8_0x2ff6b8");
#endif

    switch (ctx->pc) {
        case 0x2ff808u: goto label_2ff808;
        case 0x2ff81cu: goto label_2ff81c;
        case 0x2ff830u: goto label_2ff830;
        case 0x2ff83cu: goto label_2ff83c;
        case 0x2ff844u: goto label_2ff844;
        default: break;
    }

    ctx->pc = 0x2ff6b8u;

    // 0x2ff6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ff6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff6c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ff6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ff6c8: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x2ff6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2ff6cc: 0x24c805c0  addiu       $t0, $a2, 0x5C0
    ctx->pc = 0x2ff6ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1472));
    // 0x2ff6d0: 0x24c70140  addiu       $a3, $a2, 0x140
    ctx->pc = 0x2ff6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x2ff6d4: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2ff6d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ff6d8: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x2ff6d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2ff6dc: 0x78e40020  lq          $a0, 0x20($a3)
    ctx->pc = 0x2ff6dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2ff6e0: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x2ff6e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2ff6e4: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x2ff6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x2ff6e8: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x2ff6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x2ff6ec: 0x7d040020  sq          $a0, 0x20($t0)
    ctx->pc = 0x2ff6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 4));
    // 0x2ff6f0: 0x7d050030  sq          $a1, 0x30($t0)
    ctx->pc = 0x2ff6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 5));
    // 0x2ff6f4: 0x24ca0600  addiu       $t2, $a2, 0x600
    ctx->pc = 0x2ff6f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 1536));
    // 0x2ff6f8: 0x24c90180  addiu       $t1, $a2, 0x180
    ctx->pc = 0x2ff6f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x2ff6fc: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x2ff6fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ff700: 0x79230010  lq          $v1, 0x10($t1)
    ctx->pc = 0x2ff700u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2ff704: 0x79240020  lq          $a0, 0x20($t1)
    ctx->pc = 0x2ff704u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2ff708: 0x79250030  lq          $a1, 0x30($t1)
    ctx->pc = 0x2ff708u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x2ff70c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x2ff70cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x2ff710: 0x7d430010  sq          $v1, 0x10($t2)
    ctx->pc = 0x2ff710u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 3));
    // 0x2ff714: 0x7d440020  sq          $a0, 0x20($t2)
    ctx->pc = 0x2ff714u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 4));
    // 0x2ff718: 0x7d450030  sq          $a1, 0x30($t2)
    ctx->pc = 0x2ff718u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 5));
    // 0x2ff71c: 0x24c70640  addiu       $a3, $a2, 0x640
    ctx->pc = 0x2ff71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1600));
    // 0x2ff720: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x2ff720u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ff724: 0x79230010  lq          $v1, 0x10($t1)
    ctx->pc = 0x2ff724u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2ff728: 0x79240020  lq          $a0, 0x20($t1)
    ctx->pc = 0x2ff728u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2ff72c: 0x79250030  lq          $a1, 0x30($t1)
    ctx->pc = 0x2ff72cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x2ff730: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x2ff730u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x2ff734: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x2ff734u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x2ff738: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x2ff738u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
    // 0x2ff73c: 0x7ce50030  sq          $a1, 0x30($a3)
    ctx->pc = 0x2ff73cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 5));
    // 0x2ff740: 0x24c80680  addiu       $t0, $a2, 0x680
    ctx->pc = 0x2ff740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1664));
    // 0x2ff744: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x2ff744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ff748: 0x79230010  lq          $v1, 0x10($t1)
    ctx->pc = 0x2ff748u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2ff74c: 0x79240020  lq          $a0, 0x20($t1)
    ctx->pc = 0x2ff74cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2ff750: 0x79250030  lq          $a1, 0x30($t1)
    ctx->pc = 0x2ff750u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x2ff754: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x2ff754u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x2ff758: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x2ff758u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x2ff75c: 0x7d040020  sq          $a0, 0x20($t0)
    ctx->pc = 0x2ff75cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 4));
    // 0x2ff760: 0x7d050030  sq          $a1, 0x30($t0)
    ctx->pc = 0x2ff760u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 5));
    // 0x2ff764: 0x24ca06c0  addiu       $t2, $a2, 0x6C0
    ctx->pc = 0x2ff764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 1728));
    // 0x2ff768: 0x24c70200  addiu       $a3, $a2, 0x200
    ctx->pc = 0x2ff768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x2ff76c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2ff76cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ff770: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x2ff770u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2ff774: 0x78e40020  lq          $a0, 0x20($a3)
    ctx->pc = 0x2ff774u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2ff778: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x2ff778u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2ff77c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x2ff77cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x2ff780: 0x7d430010  sq          $v1, 0x10($t2)
    ctx->pc = 0x2ff780u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 3));
    // 0x2ff784: 0x7d440020  sq          $a0, 0x20($t2)
    ctx->pc = 0x2ff784u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 4));
    // 0x2ff788: 0x7d450030  sq          $a1, 0x30($t2)
    ctx->pc = 0x2ff788u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 5));
    // 0x2ff78c: 0x24c80700  addiu       $t0, $a2, 0x700
    ctx->pc = 0x2ff78cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x2ff790: 0x24c70300  addiu       $a3, $a2, 0x300
    ctx->pc = 0x2ff790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 768));
    // 0x2ff794: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2ff794u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ff798: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x2ff798u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2ff79c: 0x78e40020  lq          $a0, 0x20($a3)
    ctx->pc = 0x2ff79cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2ff7a0: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x2ff7a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2ff7a4: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x2ff7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x2ff7a8: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x2ff7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x2ff7ac: 0x7d040020  sq          $a0, 0x20($t0)
    ctx->pc = 0x2ff7acu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 4));
    // 0x2ff7b0: 0x7d050030  sq          $a1, 0x30($t0)
    ctx->pc = 0x2ff7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 5));
    // 0x2ff7b4: 0x24c90740  addiu       $t1, $a2, 0x740
    ctx->pc = 0x2ff7b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1856));
    // 0x2ff7b8: 0x24c70400  addiu       $a3, $a2, 0x400
    ctx->pc = 0x2ff7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x2ff7bc: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2ff7bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ff7c0: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x2ff7c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2ff7c4: 0x78e40020  lq          $a0, 0x20($a3)
    ctx->pc = 0x2ff7c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2ff7c8: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x2ff7c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2ff7cc: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x2ff7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x2ff7d0: 0x7d230010  sq          $v1, 0x10($t1)
    ctx->pc = 0x2ff7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 3));
    // 0x2ff7d4: 0x7d240020  sq          $a0, 0x20($t1)
    ctx->pc = 0x2ff7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 4));
    // 0x2ff7d8: 0x7d250030  sq          $a1, 0x30($t1)
    ctx->pc = 0x2ff7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), GPR_VEC(ctx, 5));
    // 0x2ff7dc: 0x24c804c0  addiu       $t0, $a2, 0x4C0
    ctx->pc = 0x2ff7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1216));
    // 0x2ff7e0: 0x24c60780  addiu       $a2, $a2, 0x780
    ctx->pc = 0x2ff7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1920));
    // 0x2ff7e4: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x2ff7e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ff7e8: 0x79030010  lq          $v1, 0x10($t0)
    ctx->pc = 0x2ff7e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2ff7ec: 0x79040020  lq          $a0, 0x20($t0)
    ctx->pc = 0x2ff7ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2ff7f0: 0x79050030  lq          $a1, 0x30($t0)
    ctx->pc = 0x2ff7f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x2ff7f4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2ff7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2ff7f8: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x2ff7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x2ff7fc: 0x7cc40020  sq          $a0, 0x20($a2)
    ctx->pc = 0x2ff7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 4));
    // 0x2ff800: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2FF800u;
    SET_GPR_U32(ctx, 31, 0x2FF808u);
    ctx->pc = 0x2FF804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF800u;
    // 0x2ff804: 0x7cc50030  sq          $a1, 0x30($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2FF800u, 0x2FF808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF808u;
label_2ff808:
    // 0x2ff808: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2ff808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2ff80c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF80Cu;
    {
        const bool branch_taken_0x2ff80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF80Cu;
        // 0x2ff810: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff80c) {
            ctx->pc = 0x2FF828u;
            goto label_2ff828;
        }
    }
    ctx->pc = 0x2FF814u;
    // 0x2ff814: 0xc0ae51c  jal         func_2B9470
    ctx->pc = 0x2FF814u;
    SET_GPR_U32(ctx, 31, 0x2FF81Cu);
    ctx->pc = 0x2FF818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF814u;
    // 0x2ff818: 0x8e05003c  lw          $a1, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9470u, 0x2FF814u, 0x2FF81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF81Cu;
label_2ff81c:
    // 0x2ff81c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF81Cu;
    {
        const bool branch_taken_0x2ff81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff81c) {
            ctx->pc = 0x2FF83Cu;
            goto label_2ff83c;
        }
    }
    ctx->pc = 0x2FF824u;
    // 0x2ff824: 0x0  nop
    ctx->pc = 0x2ff824u;
    // NOP
label_2ff828:
    // 0x2ff828: 0xc0ae4a8  jal         func_2B92A0
    ctx->pc = 0x2FF828u;
    SET_GPR_U32(ctx, 31, 0x2FF830u);
    ctx->pc = 0x2B92A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92A0u, 0x2FF828u, 0x2FF830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF830u;
label_2ff830:
    // 0x2ff830: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x2ff830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2ff834: 0xc0ae51c  jal         func_2B9470
    ctx->pc = 0x2FF834u;
    SET_GPR_U32(ctx, 31, 0x2FF83Cu);
    ctx->pc = 0x2FF838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF834u;
    // 0x2ff838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9470u, 0x2FF834u, 0x2FF83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF83Cu;
label_2ff83c:
    // 0x2ff83c: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2FF83Cu;
    SET_GPR_U32(ctx, 31, 0x2FF844u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2FF83Cu, 0x2FF844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF844u;
label_2ff844:
    // 0x2ff844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff848: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ff848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff84c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF84Cu;
        // 0x2ff850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF854u;
    // 0x2ff854: 0x0  nop
    ctx->pc = 0x2ff854u;
    // NOP
    ctx->pc = 0x2ff858u;
}
