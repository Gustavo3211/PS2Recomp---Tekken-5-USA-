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

// Function: sub_00296048
// Address: 0x296048 - 0x296178
void sub_00296048_0x296048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296048_0x296048");
#endif

    switch (ctx->pc) {
        case 0x296088u: goto label_296088;
        case 0x296134u: goto label_296134;
        case 0x29613cu: goto label_29613c;
        case 0x296144u: goto label_296144;
        case 0x29614cu: goto label_29614c;
        default: break;
    }

    ctx->pc = 0x296048u;

    // 0x296048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29604c: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x29604cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x296050: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x296050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x296054: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x296054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296058: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x296058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29605c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x296060: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x296060u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x296064: 0x24737378  addiu       $s3, $v1, 0x7378
    ctx->pc = 0x296064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 29560));
    // 0x296068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29606c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29606cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296070: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x296070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296074: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x296074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296078: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x296078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29607c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296080: 0xc0a5294  jal         func_294A50
    ctx->pc = 0x296080u;
    SET_GPR_U32(ctx, 31, 0x296088u);
    ctx->pc = 0x296084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296080u;
    // 0x296084: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A50u, 0x296080u, 0x296088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296088u;
label_296088:
    // 0x296088: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x296088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29608c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x29608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x296090: 0x2463b710  addiu       $v1, $v1, -0x48F0
    ctx->pc = 0x296090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
    // 0x296094: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x296094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x296098: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x296098u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB710u));
    // 0x29609c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29609cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2960a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2960A0u;
    {
        const bool branch_taken_0x2960a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2960A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960A0u;
        // 0x2960a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960a0) {
            ctx->pc = 0x2960C8u;
            goto label_2960c8;
        }
    }
    ctx->pc = 0x2960A8u;
    // 0x2960a8: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x2960a8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2960ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2960acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2960b0: 0xa2110152  sb          $s1, 0x152($s0)
    ctx->pc = 0x2960b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 338), (uint8_t)GPR_U32(ctx, 17));
    // 0x2960b4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2960b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2960b8: 0xa2120153  sb          $s2, 0x153($s0)
    ctx->pc = 0x2960b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 339), (uint8_t)GPR_U32(ctx, 18));
    // 0x2960bc: 0x1812  mflo        $v1
    ctx->pc = 0x2960bcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2960c0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2960C0u;
    {
        const bool branch_taken_0x2960c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2960C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960C0u;
        // 0x2960c4: 0xa2030154  sb          $v1, 0x154($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 340), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960c0) {
            ctx->pc = 0x29612Cu;
            goto label_29612c;
        }
    }
    ctx->pc = 0x2960C8u;
label_2960c8:
    // 0x2960c8: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2960C8u;
    {
        const bool branch_taken_0x2960c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2960c8) {
            ctx->pc = 0x2960CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2960C8u;
            // 0x2960cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2960D8u;
            goto label_2960d8;
        }
    }
    ctx->pc = 0x2960D0u;
    // 0x2960d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2960D0u;
    {
        const bool branch_taken_0x2960d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2960D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960D0u;
        // 0x2960d4: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960d0) {
            ctx->pc = 0x2960E4u;
            goto label_2960e4;
        }
    }
    ctx->pc = 0x2960D8u;
label_2960d8:
    // 0x2960d8: 0x56220021  bnel        $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2960D8u;
    {
        const bool branch_taken_0x2960d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2960d8) {
            ctx->pc = 0x2960DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2960D8u;
            // 0x2960dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296160u;
            goto label_296160;
        }
    }
    ctx->pc = 0x2960E0u;
    // 0x2960e0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2960e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2960e4:
    // 0x2960e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2960e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2960e8: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2960e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2960ec: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x2960ecu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2960f0: 0x1012  mflo        $v0
    ctx->pc = 0x2960f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2960f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2960f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2960f8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2960f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2960fc: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x2960fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x296100: 0x242280b  movn        $a1, $s2, $v0
    ctx->pc = 0x296100u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x296104: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x296104u;
    {
        const bool branch_taken_0x296104 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x296108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296104u;
        // 0x296108: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296104) {
            ctx->pc = 0x29615Cu;
            goto label_29615c;
        }
    }
    ctx->pc = 0x29610Cu;
    // 0x29610c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x296110: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x296110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296114: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x296114u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x296118: 0xa2110152  sb          $s1, 0x152($s0)
    ctx->pc = 0x296118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 338), (uint8_t)GPR_U32(ctx, 17));
    // 0x29611c: 0xa2050153  sb          $a1, 0x153($s0)
    ctx->pc = 0x29611cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 339), (uint8_t)GPR_U32(ctx, 5));
    // 0x296120: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x296120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x296124: 0x1012  mflo        $v0
    ctx->pc = 0x296124u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x296128: 0xa2020154  sb          $v0, 0x154($s0)
    ctx->pc = 0x296128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 340), (uint8_t)GPR_U32(ctx, 2));
label_29612c:
    // 0x29612c: 0xc0a53b2  jal         func_294EC8
    ctx->pc = 0x29612Cu;
    SET_GPR_U32(ctx, 31, 0x296134u);
    ctx->pc = 0x294EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294EC8u, 0x29612Cu, 0x296134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296134u;
label_296134:
    // 0x296134: 0xc0a535e  jal         func_294D78
    ctx->pc = 0x296134u;
    SET_GPR_U32(ctx, 31, 0x29613Cu);
    ctx->pc = 0x296138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296134u;
    // 0x296138: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D78u, 0x296134u, 0x29613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29613Cu;
label_29613c:
    // 0x29613c: 0xc0a5490  jal         func_295240
    ctx->pc = 0x29613Cu;
    SET_GPR_U32(ctx, 31, 0x296144u);
    ctx->pc = 0x296140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29613Cu;
    // 0x296140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295240u, 0x29613Cu, 0x296144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296144u;
label_296144:
    // 0x296144: 0xc0b7a98  jal         func_2DEA60
    ctx->pc = 0x296144u;
    SET_GPR_U32(ctx, 31, 0x29614Cu);
    ctx->pc = 0x296148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296144u;
    // 0x296148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA60u, 0x296144u, 0x29614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29614Cu;
label_29614c:
    // 0x29614c: 0x96020150  lhu         $v0, 0x150($s0)
    ctx->pc = 0x29614cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x296150: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x296150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x296154: 0x3042fff9  andi        $v0, $v0, 0xFFF9
    ctx->pc = 0x296154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65529);
    // 0x296158: 0xa6020150  sh          $v0, 0x150($s0)
    ctx->pc = 0x296158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 336), (uint16_t)GPR_U32(ctx, 2));
label_29615c:
    // 0x29615c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29615cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296160:
    // 0x296160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x296164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296168: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x296168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29616c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29616cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296170: 0x3e00008  jr          $ra
    ctx->pc = 0x296170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296170u;
        // 0x296174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296178u;
}
