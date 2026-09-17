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

// Function: sub_0034B100
// Address: 0x34b100 - 0x34b1a0
void sub_0034B100_0x34b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B100_0x34b100");
#endif

    ctx->pc = 0x34b100u;

    // 0x34b100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b104: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x34b104u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x34b108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b10c: 0x25080d00  addiu       $t0, $t0, 0xD00
    ctx->pc = 0x34b10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3328));
    // 0x34b110: 0x250800d8  addiu       $t0, $t0, 0xD8
    ctx->pc = 0x34b110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 216));
    // 0x34b114: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x34b114u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34b118: 0x8c8a000c  lw          $t2, 0xC($a0)
    ctx->pc = 0x34b118u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34b11c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x34b11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b120: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x34b120u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b124: 0x3c096c02  lui         $t1, 0x6C02
    ctx->pc = 0x34b124u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)27650 << 16));
    // 0x34b128: 0x95420002  lhu         $v0, 0x2($t2)
    ctx->pc = 0x34b128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x34b12c: 0x35298000  ori         $t1, $t1, 0x8000
    ctx->pc = 0x34b12cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
    // 0x34b130: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x34b130u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x34b134: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x34b134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x34b138: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x34b138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x34b13c: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x34b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x34b140: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x34b140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x34b144: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x34b144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x400DE4u));
    // 0x34b148: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x34b148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x34b14c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x34b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DE0u));
    // 0x34b150: 0xacac0014  sw          $t4, 0x14($a1)
    ctx->pc = 0x34b150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 12));
    // 0x34b154: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x34b154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x34b158: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x34b158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x34b15c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x34b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x34b160: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x34b160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x34b164: 0x95430004  lhu         $v1, 0x4($t2)
    ctx->pc = 0x34b164u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x34b168: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x34b168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x34b16c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x34b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x34b170: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x34b170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x34b174: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34b174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34b178: 0x70473b89  pcpyld      $a3, $v0, $a3
    ctx->pc = 0x34b178u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x34b17c: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x34b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x34b180: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x34b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x34b184: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x34b184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x34b188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b18c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x34b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x34b190: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x34b190u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x34b194: 0x80cb74c  j           func_32DD30
    ctx->pc = 0x34B194u;
    ctx->pc = 0x34B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B194u;
    // 0x34b198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DD30u, 0x34B194u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34B19Cu;
    // 0x34b19c: 0x0  nop
    ctx->pc = 0x34b19cu;
    // NOP
    ctx->pc = 0x34b1a0u;
}
