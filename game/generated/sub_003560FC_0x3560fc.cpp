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

// Function: sub_003560FC
// Address: 0x3560fc - 0x356638
void sub_003560FC_0x3560fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003560FC_0x3560fc");
#endif

    switch (ctx->pc) {
        case 0x356120u: goto label_356120;
        case 0x35618cu: goto label_35618c;
        case 0x356194u: goto label_356194;
        case 0x3561a8u: goto label_3561a8;
        case 0x356218u: goto label_356218;
        case 0x356238u: goto label_356238;
        case 0x356254u: goto label_356254;
        case 0x356278u: goto label_356278;
        case 0x35628cu: goto label_35628c;
        case 0x3562dcu: goto label_3562dc;
        case 0x35637cu: goto label_35637c;
        case 0x35639cu: goto label_35639c;
        case 0x3563b0u: goto label_3563b0;
        case 0x356400u: goto label_356400;
        case 0x3564f4u: goto label_3564f4;
        case 0x356510u: goto label_356510;
        case 0x356524u: goto label_356524;
        case 0x356574u: goto label_356574;
        case 0x35661cu: goto label_35661c;
        default: break;
    }

    ctx->pc = 0x3560fcu;

    // 0x3560fc: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3560fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x356100: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x356100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x356104: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x356104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x356108: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x356108u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35610c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x35610cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x356110: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x356110u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x356114: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x356114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x356118: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x356118u;
    SET_GPR_U32(ctx, 31, 0x356120u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x356118u, 0x356120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356120u;
label_356120:
    // 0x356120: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x356120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356124: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x356124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356128: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x356128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35612c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x356130: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x356130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x356134: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x356134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356138: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35613c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35613cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356140: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x356140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356144: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x356144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x356148: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x356148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x35614c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356150: 0xafc200e0  sw          $v0, 0xE0($fp)
    ctx->pc = 0x356150u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 224), GPR_U32(ctx, 2));
    // 0x356154: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x356154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356158: 0x27c30028  addiu       $v1, $fp, 0x28
    ctx->pc = 0x356158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
    // 0x35615c: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x35615cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x356160: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x356160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x356164: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x356164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356168: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x356168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35616c: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x35616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x356170: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x356170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x356174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x356174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356178: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x356178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x35617c: 0x2786c750  addiu       $a2, $gp, -0x38B0
    ctx->pc = 0x35617cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952784));
    // 0x356180: 0x8fc70004  lw          $a3, 0x4($fp)
    ctx->pc = 0x356180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x356184: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x356184u;
    SET_GPR_U32(ctx, 31, 0x35618Cu);
    ctx->pc = 0x128C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128C78u, 0x356184u, 0x35618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35618Cu;
label_35618c:
    // 0x35618c: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x35618cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x356190: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x356190u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_356194:
    // 0x356194: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x356194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x356198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x356198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35619c: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x35619cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3561a0: 0xc0d598e  jal         func_356638
    ctx->pc = 0x3561A0u;
    SET_GPR_U32(ctx, 31, 0x3561A8u);
    ctx->pc = 0x356638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356638u, 0x3561A0u, 0x3561A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3561A8u;
label_3561a8:
    // 0x3561a8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3561a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3561ac: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3561acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3561b0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3561b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3561b4: 0x3442fff9  ori         $v0, $v0, 0xFFF9
    ctx->pc = 0x3561b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65529);
    // 0x3561b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3561B8u;
    {
        const bool branch_taken_0x3561b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3561b8) {
            ctx->pc = 0x3561C8u;
            goto label_3561c8;
        }
    }
    ctx->pc = 0x3561C0u;
    // 0x3561c0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x3561C0u;
    {
        const bool branch_taken_0x3561c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3561c0) {
            ctx->pc = 0x35637Cu;
            goto label_35637c;
        }
    }
    ctx->pc = 0x3561C8u;
label_3561c8:
    // 0x3561c8: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3561c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3561cc: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3561ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3561d0: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x3561d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x3561d4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3561D4u;
    {
        const bool branch_taken_0x3561d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3561d4) {
            ctx->pc = 0x3561E4u;
            goto label_3561e4;
        }
    }
    ctx->pc = 0x3561DCu;
    // 0x3561dc: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3561DCu;
    {
        const bool branch_taken_0x3561dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3561dc) {
            ctx->pc = 0x35637Cu;
            goto label_35637c;
        }
    }
    ctx->pc = 0x3561E4u;
label_3561e4:
    // 0x3561e4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3561e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3561e8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3561E8u;
    {
        const bool branch_taken_0x3561e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3561e8) {
            ctx->pc = 0x356200u;
            goto label_356200;
        }
    }
    ctx->pc = 0x3561F0u;
    // 0x3561f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3561f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3561f4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3561f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3561f8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3561F8u;
    {
        const bool branch_taken_0x3561f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3561f8) {
            ctx->pc = 0x35637Cu;
            goto label_35637c;
        }
    }
    ctx->pc = 0x356200u;
label_356200:
    // 0x356200: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x356200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x356204: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x356204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x356208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x356208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35620c: 0x2785c758  addiu       $a1, $gp, -0x38A8
    ctx->pc = 0x35620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952792));
    // 0x356210: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x356210u;
    SET_GPR_U32(ctx, 31, 0x356218u);
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x356210u, 0x356218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356218u;
label_356218:
    // 0x356218: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x356218u;
    {
        const bool branch_taken_0x356218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356218) {
            ctx->pc = 0x356240u;
            goto label_356240;
        }
    }
    ctx->pc = 0x356220u;
    // 0x356220: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x356220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x356224: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x356224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x356228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x356228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35622c: 0x2785c760  addiu       $a1, $gp, -0x38A0
    ctx->pc = 0x35622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952800));
    // 0x356230: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x356230u;
    SET_GPR_U32(ctx, 31, 0x356238u);
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x356230u, 0x356238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356238u;
label_356238:
    // 0x356238: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x356238u;
    {
        const bool branch_taken_0x356238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356238) {
            ctx->pc = 0x356250u;
            goto label_356250;
        }
    }
    ctx->pc = 0x356240u;
label_356240:
    // 0x356240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356244: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x356244u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x356248: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x356248u;
    {
        const bool branch_taken_0x356248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356248) {
            ctx->pc = 0x356194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356194;
        }
    }
    ctx->pc = 0x356250u;
label_356250:
    // 0x356250: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x356250u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_356254:
    // 0x356254: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x356254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356258: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x356258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35625c: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x35625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x356260: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x356260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x356264: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x356264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356268: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x356268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35626c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35626cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356270: 0xc043860  jal         func_10E180
    ctx->pc = 0x356270u;
    SET_GPR_U32(ctx, 31, 0x356278u);
    ctx->pc = 0x10E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E180u, 0x356270u, 0x356278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356278u;
label_356278:
    // 0x356278: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356278u;
    {
        const bool branch_taken_0x356278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356278) {
            ctx->pc = 0x356288u;
            goto label_356288;
        }
    }
    ctx->pc = 0x356280u;
    // 0x356280: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x356280u;
    {
        const bool branch_taken_0x356280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356280) {
            ctx->pc = 0x3562C0u;
            goto label_3562c0;
        }
    }
    ctx->pc = 0x356288u;
label_356288:
    // 0x356288: 0xafc000e4  sw          $zero, 0xE4($fp)
    ctx->pc = 0x356288u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 228), GPR_U32(ctx, 0));
label_35628c:
    // 0x35628c: 0x8fc200e4  lw          $v0, 0xE4($fp)
    ctx->pc = 0x35628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 228)));
    // 0x356290: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x356290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x356294: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x356294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x356298: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x356298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35629c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35629Cu;
    {
        const bool branch_taken_0x35629c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35629c) {
            ctx->pc = 0x3562ACu;
            goto label_3562ac;
        }
    }
    ctx->pc = 0x3562A4u;
    // 0x3562a4: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x3562A4u;
    {
        const bool branch_taken_0x3562a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3562a4) {
            ctx->pc = 0x356254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356254;
        }
    }
    ctx->pc = 0x3562ACu;
label_3562ac:
    // 0x3562ac: 0x8fc200e4  lw          $v0, 0xE4($fp)
    ctx->pc = 0x3562acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 228)));
    // 0x3562b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3562b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3562b4: 0xafc200e4  sw          $v0, 0xE4($fp)
    ctx->pc = 0x3562b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 228), GPR_U32(ctx, 2));
    // 0x3562b8: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x3562B8u;
    {
        const bool branch_taken_0x3562b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3562b8) {
            ctx->pc = 0x35628Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35628c;
        }
    }
    ctx->pc = 0x3562C0u;
label_3562c0:
    // 0x3562c0: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x3562c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x3562c4: 0x27c30018  addiu       $v1, $fp, 0x18
    ctx->pc = 0x3562c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x3562c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3562c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3562cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3562ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3562d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3562d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3562d4: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x3562D4u;
    SET_GPR_U32(ctx, 31, 0x3562DCu);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x3562D4u, 0x3562DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562DCu;
label_3562dc:
    // 0x3562dc: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x3562dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3562e0: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x3562e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x3562e4: 0xafc20130  sw          $v0, 0x130($fp)
    ctx->pc = 0x3562e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 304), GPR_U32(ctx, 2));
    // 0x3562e8: 0x8fc30130  lw          $v1, 0x130($fp)
    ctx->pc = 0x3562e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 304)));
    // 0x3562ec: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x3562ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3562f0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3562F0u;
    {
        const bool branch_taken_0x3562f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3562f0) {
            ctx->pc = 0x356368u;
            goto label_356368;
        }
    }
    ctx->pc = 0x3562F8u;
    // 0x3562f8: 0x8fc20130  lw          $v0, 0x130($fp)
    ctx->pc = 0x3562f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 304)));
    // 0x3562fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3562fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356300: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x356300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x356304: 0x24424e60  addiu       $v0, $v0, 0x4E60
    ctx->pc = 0x356304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20064));
    // 0x356308: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x356308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35630c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356310: 0x400008  jr          $v0
    ctx->pc = 0x356310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x356194u: goto label_356194;
            case 0x356318u: goto label_356318;
            case 0x35632Cu: goto label_35632c;
            case 0x356340u: goto label_356340;
            case 0x356354u: goto label_356354;
            case 0x356368u: goto label_356368;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356310u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x356318u;
label_356318:
    // 0x356318: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x35631c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356320: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x356320u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x356324: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x356324u;
    {
        const bool branch_taken_0x356324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356324) {
            ctx->pc = 0x356374u;
            goto label_356374;
        }
    }
    ctx->pc = 0x35632Cu;
label_35632c:
    // 0x35632c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x35632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356330: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x356330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x356334: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x356334u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x356338: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x356338u;
    {
        const bool branch_taken_0x356338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356338) {
            ctx->pc = 0x356374u;
            goto label_356374;
        }
    }
    ctx->pc = 0x356340u;
label_356340:
    // 0x356340: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356344: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x356344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x356348: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x356348u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x35634c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35634Cu;
    {
        const bool branch_taken_0x35634c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35634c) {
            ctx->pc = 0x356374u;
            goto label_356374;
        }
    }
    ctx->pc = 0x356354u;
label_356354:
    // 0x356354: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356358: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x356358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x35635c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x35635cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x356360: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x356360u;
    {
        const bool branch_taken_0x356360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356360) {
            ctx->pc = 0x356374u;
            goto label_356374;
        }
    }
    ctx->pc = 0x356368u;
label_356368:
    // 0x356368: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x35636c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x35636cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x356370: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x356370u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_356374:
    // 0x356374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356378: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x356378u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_35637c:
    // 0x35637c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356380: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x356380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356384: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x356384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356388: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x356388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35638c: 0x2786c768  addiu       $a2, $gp, -0x3898
    ctx->pc = 0x35638cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952808));
    // 0x356390: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x356390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356394: 0xc0437dc  jal         func_10DF70
    ctx->pc = 0x356394u;
    SET_GPR_U32(ctx, 31, 0x35639Cu);
    ctx->pc = 0x10DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF70u, 0x356394u, 0x35639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35639Cu;
label_35639c:
    // 0x35639c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35639Cu;
    {
        const bool branch_taken_0x35639c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35639c) {
            ctx->pc = 0x3563ACu;
            goto label_3563ac;
        }
    }
    ctx->pc = 0x3563A4u;
    // 0x3563a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3563A4u;
    {
        const bool branch_taken_0x3563a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3563a4) {
            ctx->pc = 0x3563E4u;
            goto label_3563e4;
        }
    }
    ctx->pc = 0x3563ACu;
label_3563ac:
    // 0x3563ac: 0xafc000e4  sw          $zero, 0xE4($fp)
    ctx->pc = 0x3563acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 228), GPR_U32(ctx, 0));
label_3563b0:
    // 0x3563b0: 0x8fc200e4  lw          $v0, 0xE4($fp)
    ctx->pc = 0x3563b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 228)));
    // 0x3563b4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3563b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x3563b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3563b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3563bc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3563bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3563c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3563C0u;
    {
        const bool branch_taken_0x3563c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3563c0) {
            ctx->pc = 0x3563D0u;
            goto label_3563d0;
        }
    }
    ctx->pc = 0x3563C8u;
    // 0x3563c8: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x3563C8u;
    {
        const bool branch_taken_0x3563c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3563c8) {
            ctx->pc = 0x35637Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35637c;
        }
    }
    ctx->pc = 0x3563D0u;
label_3563d0:
    // 0x3563d0: 0x8fc200e4  lw          $v0, 0xE4($fp)
    ctx->pc = 0x3563d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 228)));
    // 0x3563d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3563d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3563d8: 0xafc200e4  sw          $v0, 0xE4($fp)
    ctx->pc = 0x3563d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 228), GPR_U32(ctx, 2));
    // 0x3563dc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x3563DCu;
    {
        const bool branch_taken_0x3563dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3563dc) {
            ctx->pc = 0x3563B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3563b0;
        }
    }
    ctx->pc = 0x3563E4u;
label_3563e4:
    // 0x3563e4: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x3563e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x3563e8: 0x27c30018  addiu       $v1, $fp, 0x18
    ctx->pc = 0x3563e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x3563ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3563ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3563f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3563f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3563f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3563f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3563f8: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x3563F8u;
    SET_GPR_U32(ctx, 31, 0x356400u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x3563F8u, 0x356400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356400u;
label_356400:
    // 0x356400: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x356400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x356404: 0xafc40134  sw          $a0, 0x134($fp)
    ctx->pc = 0x356404u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 308), GPR_U32(ctx, 4));
    // 0x356408: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x356408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x35640c: 0x8fc50134  lw          $a1, 0x134($fp)
    ctx->pc = 0x35640cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 308)));
    // 0x356410: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x356410u;
    {
        const bool branch_taken_0x356410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x356410) {
            ctx->pc = 0x356480u;
            goto label_356480;
        }
    }
    ctx->pc = 0x356418u;
    // 0x356418: 0x8fc60134  lw          $a2, 0x134($fp)
    ctx->pc = 0x356418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 308)));
    // 0x35641c: 0x28c2fffd  slti        $v0, $a2, -0x3
    ctx->pc = 0x35641cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x356420: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x356420u;
    {
        const bool branch_taken_0x356420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356420) {
            ctx->pc = 0x356440u;
            goto label_356440;
        }
    }
    ctx->pc = 0x356428u;
    // 0x356428: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x356428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x35642c: 0x8fc70134  lw          $a3, 0x134($fp)
    ctx->pc = 0x35642cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 308)));
    // 0x356430: 0x10e2001a  beq         $a3, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x356430u;
    {
        const bool branch_taken_0x356430 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x356430) {
            ctx->pc = 0x35649Cu;
            goto label_35649c;
        }
    }
    ctx->pc = 0x356438u;
    // 0x356438: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x356438u;
    {
        const bool branch_taken_0x356438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356438) {
            ctx->pc = 0x3564B8u;
            goto label_3564b8;
        }
    }
    ctx->pc = 0x356440u;
label_356440:
    // 0x356440: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x356440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x356444: 0x8fc30134  lw          $v1, 0x134($fp)
    ctx->pc = 0x356444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 308)));
    // 0x356448: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x356448u;
    {
        const bool branch_taken_0x356448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356448) {
            ctx->pc = 0x356464u;
            goto label_356464;
        }
    }
    ctx->pc = 0x356450u;
    // 0x356450: 0x8fc40134  lw          $a0, 0x134($fp)
    ctx->pc = 0x356450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 308)));
    // 0x356454: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x356454u;
    {
        const bool branch_taken_0x356454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x356454) {
            ctx->pc = 0x3564CCu;
            goto label_3564cc;
        }
    }
    ctx->pc = 0x35645Cu;
    // 0x35645c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35645Cu;
    {
        const bool branch_taken_0x35645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35645c) {
            ctx->pc = 0x3564B8u;
            goto label_3564b8;
        }
    }
    ctx->pc = 0x356464u;
label_356464:
    // 0x356464: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356468: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35646c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x35646cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x356470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356474: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x356474u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x356478: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x356478u;
    {
        const bool branch_taken_0x356478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356478) {
            ctx->pc = 0x3564CCu;
            goto label_3564cc;
        }
    }
    ctx->pc = 0x356480u;
label_356480:
    // 0x356480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356484: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x356484u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x356488: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x35648c: 0x3442fff6  ori         $v0, $v0, 0xFFF6
    ctx->pc = 0x35648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65526);
    // 0x356490: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x356490u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x356494: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x356494u;
    {
        const bool branch_taken_0x356494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356494) {
            ctx->pc = 0x3564CCu;
            goto label_3564cc;
        }
    }
    ctx->pc = 0x35649Cu;
label_35649c:
    // 0x35649c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3564a0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3564a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3564a4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3564a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3564a8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3564a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3564ac: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3564acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3564b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3564B0u;
    {
        const bool branch_taken_0x3564b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3564b0) {
            ctx->pc = 0x3564CCu;
            goto label_3564cc;
        }
    }
    ctx->pc = 0x3564B8u;
label_3564b8:
    // 0x3564b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3564b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3564bc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3564bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3564c0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3564c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3564c4: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x3564c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x3564c8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3564c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_3564cc:
    // 0x3564cc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3564ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3564d0: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3564D0u;
    {
        const bool branch_taken_0x3564d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3564d0) {
            ctx->pc = 0x356610u;
            goto label_356610;
        }
    }
    ctx->pc = 0x3564D8u;
    // 0x3564d8: 0x27c200f0  addiu       $v0, $fp, 0xF0
    ctx->pc = 0x3564d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 240));
    // 0x3564dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3564dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3564e0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3564e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3564e4: 0x2786c748  addiu       $a2, $gp, -0x38B8
    ctx->pc = 0x3564e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952776));
    // 0x3564e8: 0x8fc70004  lw          $a3, 0x4($fp)
    ctx->pc = 0x3564e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3564ec: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x3564ECu;
    SET_GPR_U32(ctx, 31, 0x3564F4u);
    ctx->pc = 0x128C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128C78u, 0x3564ECu, 0x3564F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564F4u;
label_3564f4:
    // 0x3564f4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3564f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3564f8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3564f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3564fc: 0x27c600f0  addiu       $a2, $fp, 0xF0
    ctx->pc = 0x3564fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 240));
    // 0x356500: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x356500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356504: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x356504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x356508: 0xc043860  jal         func_10E180
    ctx->pc = 0x356508u;
    SET_GPR_U32(ctx, 31, 0x356510u);
    ctx->pc = 0x10E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E180u, 0x356508u, 0x356510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356510u;
label_356510:
    // 0x356510: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356510u;
    {
        const bool branch_taken_0x356510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356510) {
            ctx->pc = 0x356520u;
            goto label_356520;
        }
    }
    ctx->pc = 0x356518u;
    // 0x356518: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x356518u;
    {
        const bool branch_taken_0x356518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356518) {
            ctx->pc = 0x356558u;
            goto label_356558;
        }
    }
    ctx->pc = 0x356520u;
label_356520:
    // 0x356520: 0xafc000e4  sw          $zero, 0xE4($fp)
    ctx->pc = 0x356520u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 228), GPR_U32(ctx, 0));
label_356524:
    // 0x356524: 0x8fc200e4  lw          $v0, 0xE4($fp)
    ctx->pc = 0x356524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 228)));
    // 0x356528: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x356528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x35652c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35652cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x356530: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x356530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x356534: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356534u;
    {
        const bool branch_taken_0x356534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356534) {
            ctx->pc = 0x356544u;
            goto label_356544;
        }
    }
    ctx->pc = 0x35653Cu;
    // 0x35653c: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x35653Cu;
    {
        const bool branch_taken_0x35653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35653c) {
            ctx->pc = 0x3564F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3564f4;
        }
    }
    ctx->pc = 0x356544u;
label_356544:
    // 0x356544: 0x8fc200e4  lw          $v0, 0xE4($fp)
    ctx->pc = 0x356544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 228)));
    // 0x356548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35654c: 0xafc200e4  sw          $v0, 0xE4($fp)
    ctx->pc = 0x35654cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 228), GPR_U32(ctx, 2));
    // 0x356550: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x356550u;
    {
        const bool branch_taken_0x356550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356550) {
            ctx->pc = 0x356524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356524;
        }
    }
    ctx->pc = 0x356558u;
label_356558:
    // 0x356558: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x356558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x35655c: 0x27c30018  addiu       $v1, $fp, 0x18
    ctx->pc = 0x35655cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x356560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x356564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356568: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x356568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35656c: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x35656Cu;
    SET_GPR_U32(ctx, 31, 0x356574u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x35656Cu, 0x356574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356574u;
label_356574:
    // 0x356574: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x356574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x356578: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x356578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x35657c: 0xafc20138  sw          $v0, 0x138($fp)
    ctx->pc = 0x35657cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 312), GPR_U32(ctx, 2));
    // 0x356580: 0x8fc50138  lw          $a1, 0x138($fp)
    ctx->pc = 0x356580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 312)));
    // 0x356584: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x356584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x356588: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x356588u;
    {
        const bool branch_taken_0x356588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356588) {
            ctx->pc = 0x356604u;
            goto label_356604;
        }
    }
    ctx->pc = 0x356590u;
    // 0x356590: 0x8fc20138  lw          $v0, 0x138($fp)
    ctx->pc = 0x356590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 312)));
    // 0x356594: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x356594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356598: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x356598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x35659c: 0x24424e80  addiu       $v0, $v0, 0x4E80
    ctx->pc = 0x35659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20096));
    // 0x3565a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3565a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3565a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3565a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3565a8: 0x400008  jr          $v0
    ctx->pc = 0x3565A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3565B0u: goto label_3565b0;
            case 0x3565BCu: goto label_3565bc;
            case 0x3565D0u: goto label_3565d0;
            case 0x3565DCu: goto label_3565dc;
            case 0x3565F0u: goto label_3565f0;
            case 0x356604u: goto label_356604;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3565A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3565B0u;
label_3565b0:
    // 0x3565b0: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x3565b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
    // 0x3565b4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3565B4u;
    {
        const bool branch_taken_0x3565b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3565b4) {
            ctx->pc = 0x356610u;
            goto label_356610;
        }
    }
    ctx->pc = 0x3565BCu;
label_3565bc:
    // 0x3565bc: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3565bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3565c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3565c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3565c4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3565c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3565c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3565C8u;
    {
        const bool branch_taken_0x3565c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3565c8) {
            ctx->pc = 0x356610u;
            goto label_356610;
        }
    }
    ctx->pc = 0x3565D0u;
label_3565d0:
    // 0x3565d0: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x3565d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
    // 0x3565d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3565D4u;
    {
        const bool branch_taken_0x3565d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3565d4) {
            ctx->pc = 0x356610u;
            goto label_356610;
        }
    }
    ctx->pc = 0x3565DCu;
label_3565dc:
    // 0x3565dc: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3565dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3565e0: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x3565e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x3565e4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3565e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3565e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3565E8u;
    {
        const bool branch_taken_0x3565e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3565e8) {
            ctx->pc = 0x356610u;
            goto label_356610;
        }
    }
    ctx->pc = 0x3565F0u;
label_3565f0:
    // 0x3565f0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3565f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3565f4: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x3565f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x3565f8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3565f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3565fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3565FCu;
    {
        const bool branch_taken_0x3565fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3565fc) {
            ctx->pc = 0x356610u;
            goto label_356610;
        }
    }
    ctx->pc = 0x356604u;
label_356604:
    // 0x356604: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356608: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x356608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x35660c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x35660cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_356610:
    // 0x356610: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x356610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x356614: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x356614u;
    SET_GPR_U32(ctx, 31, 0x35661Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x356614u, 0x35661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35661Cu;
label_35661c:
    // 0x35661c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x35661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x356620: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x356620u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356624: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x356624u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x356628: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x356628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x35662c: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x35662cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x356630: 0x3e00008  jr          $ra
    ctx->pc = 0x356630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356638u;
}
