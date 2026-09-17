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

// Function: sub_0020A1D0
// Address: 0x20a1d0 - 0x20a370
void sub_0020A1D0_0x20a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A1D0_0x20a1d0");
#endif

    switch (ctx->pc) {
        case 0x20a218u: goto label_20a218;
        case 0x20a2f4u: goto label_20a2f4;
        case 0x20a2fcu: goto label_20a2fc;
        case 0x20a310u: goto label_20a310;
        case 0x20a31cu: goto label_20a31c;
        case 0x20a328u: goto label_20a328;
        case 0x20a334u: goto label_20a334;
        case 0x20a350u: goto label_20a350;
        default: break;
    }

    ctx->pc = 0x20a1d0u;

    // 0x20a1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a1d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a1d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a1e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a1e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20a1e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20a1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20a1ec: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x20a1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x20a1f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20a1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20a1f4: 0x26628858  addiu       $v0, $s3, -0x77A8
    ctx->pc = 0x20a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x20a1f8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x20a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x20a1fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A1FCu;
    {
        const bool branch_taken_0x20a1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1FCu;
        // 0x20a200: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1fc) {
            ctx->pc = 0x20A210u;
            goto label_20a210;
        }
    }
    ctx->pc = 0x20A204u;
    // 0x20a204: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x20a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20a208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a20c: 0xaf829730  sw          $v0, -0x68D0($gp)
    ctx->pc = 0x20a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 2));
label_20a210:
    // 0x20a210: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x20A210u;
    SET_GPR_U32(ctx, 31, 0x20A218u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x20A210u, 0x20A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A218u;
label_20a218:
    // 0x20a218: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20A218u;
    {
        const bool branch_taken_0x20a218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a218) {
            ctx->pc = 0x20A21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A218u;
            // 0x20a21c: 0x8e22069c  lw          $v0, 0x69C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A24Cu;
            goto label_20a24c;
        }
    }
    ctx->pc = 0x20A220u;
    // 0x20a220: 0x8f829744  lw          $v0, -0x68BC($gp)
    ctx->pc = 0x20a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940484)));
    // 0x20a224: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A224u;
    {
        const bool branch_taken_0x20a224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A224u;
        // 0x20a228: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a224) {
            ctx->pc = 0x20A238u;
            goto label_20a238;
        }
    }
    ctx->pc = 0x20A22Cu;
    // 0x20a22c: 0x8f829728  lw          $v0, -0x68D8($gp)
    ctx->pc = 0x20a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940456)));
    // 0x20a230: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20a234: 0xaf829728  sw          $v0, -0x68D8($gp)
    ctx->pc = 0x20a234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940456), GPR_U32(ctx, 2));
label_20a238:
    // 0x20a238: 0x246383c0  addiu       $v1, $v1, -0x7C40
    ctx->pc = 0x20a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935488));
    // 0x20a23c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x20a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x20a240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20a240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a244: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x20a244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x20a248: 0x8e22069c  lw          $v0, 0x69C($s1)
    ctx->pc = 0x20a248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_20a24c:
    // 0x20a24c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20A24Cu;
    {
        const bool branch_taken_0x20a24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A24Cu;
        // 0x20a250: 0x26628858  addiu       $v0, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a24c) {
            ctx->pc = 0x20A2D8u;
            goto label_20a2d8;
        }
    }
    ctx->pc = 0x20A254u;
    // 0x20a254: 0x8e02069c  lw          $v0, 0x69C($s0)
    ctx->pc = 0x20a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
    // 0x20a258: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x20A258u;
    {
        const bool branch_taken_0x20a258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A258u;
        // 0x20a25c: 0x8f829728  lw          $v0, -0x68D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a258) {
            ctx->pc = 0x20A2D4u;
            goto label_20a2d4;
        }
    }
    ctx->pc = 0x20A260u;
    // 0x20a260: 0x5840001d  blezl       $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20A260u;
    {
        const bool branch_taken_0x20a260 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20a260) {
            ctx->pc = 0x20A264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A260u;
            // 0x20a264: 0x26628858  addiu       $v0, $s3, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A2D8u;
            goto label_20a2d8;
        }
    }
    ctx->pc = 0x20A268u;
    // 0x20a268: 0xc6200750  lwc1        $f0, 0x750($s1)
    ctx->pc = 0x20a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a26c: 0xc6210758  lwc1        $f1, 0x758($s1)
    ctx->pc = 0x20a26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a270: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x20a270u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x20a274: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x20a274u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x20a278: 0x46010044  c1          0x10044
    ctx->pc = 0x20a278u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x20a27c: 0xc78083ac  lwc1        $f0, -0x7C54($gp)
    ctx->pc = 0x20a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a280: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20a280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a284: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x20A284u;
    {
        const bool branch_taken_0x20a284 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A284u;
        // 0x20a288: 0x26628858  addiu       $v0, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a284) {
            ctx->pc = 0x20A2D8u;
            goto label_20a2d8;
        }
    }
    ctx->pc = 0x20A28Cu;
    // 0x20a28c: 0xc6000750  lwc1        $f0, 0x750($s0)
    ctx->pc = 0x20a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a290: 0xc6010758  lwc1        $f1, 0x758($s0)
    ctx->pc = 0x20a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a294: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x20a294u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x20a298: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x20a298u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x20a29c: 0x46010044  c1          0x10044
    ctx->pc = 0x20a29cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x20a2a0: 0xc78083b0  lwc1        $f0, -0x7C50($gp)
    ctx->pc = 0x20a2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a2a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20a2a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a2a8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x20A2A8u;
    {
        const bool branch_taken_0x20a2a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2A8u;
        // 0x20a2ac: 0x26628858  addiu       $v0, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2a8) {
            ctx->pc = 0x20A2D8u;
            goto label_20a2d8;
        }
    }
    ctx->pc = 0x20A2B0u;
    // 0x20a2b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x20a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x20a2b4: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x20a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x20a2b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20a2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20a2bc: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x20A2BCu;
    {
        const bool branch_taken_0x20a2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a2bc) {
            ctx->pc = 0x20A2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A2BCu;
            // 0x20a2c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A354u;
            goto label_20a354;
        }
    }
    ctx->pc = 0x20A2C4u;
    // 0x20a2c4: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x20a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20a2c8: 0x2c420709  sltiu       $v0, $v0, 0x709
    ctx->pc = 0x20a2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1801) ? 1 : 0);
    // 0x20a2cc: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x20A2CCu;
    {
        const bool branch_taken_0x20a2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a2cc) {
            ctx->pc = 0x20A2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A2CCu;
            // 0x20a2d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A354u;
            goto label_20a354;
        }
    }
    ctx->pc = 0x20A2D4u;
label_20a2d4:
    // 0x20a2d4: 0x26628858  addiu       $v0, $s3, -0x77A8
    ctx->pc = 0x20a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
label_20a2d8:
    // 0x20a2d8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x20a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x20a2dc: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x20A2DCu;
    {
        const bool branch_taken_0x20a2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a2dc) {
            ctx->pc = 0x20A2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A2DCu;
            // 0x20a2e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A354u;
            goto label_20a354;
        }
    }
    ctx->pc = 0x20A2E4u;
    // 0x20a2e4: 0x5240001b  beql        $s2, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x20A2E4u;
    {
        const bool branch_taken_0x20a2e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a2e4) {
            ctx->pc = 0x20A2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A2E4u;
            // 0x20a2e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A354u;
            goto label_20a354;
        }
    }
    ctx->pc = 0x20A2ECu;
    // 0x20a2ec: 0xc07e252  jal         func_1F8948
    ctx->pc = 0x20A2ECu;
    SET_GPR_U32(ctx, 31, 0x20A2F4u);
    ctx->pc = 0x20A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A2ECu;
    // 0x20a2f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8948u, 0x20A2ECu, 0x20A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A2F4u;
label_20a2f4:
    // 0x20a2f4: 0xc082162  jal         func_208588
    ctx->pc = 0x20A2F4u;
    SET_GPR_U32(ctx, 31, 0x20A2FCu);
    ctx->pc = 0x20A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A2F4u;
    // 0x20a2f8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20A2F4u, 0x20A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A2FCu;
label_20a2fc:
    // 0x20a2fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20a304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a308: 0xc0822fa  jal         func_208BE8
    ctx->pc = 0x20A308u;
    SET_GPR_U32(ctx, 31, 0x20A310u);
    ctx->pc = 0x20A30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A308u;
    // 0x20a30c: 0xaf829738  sw          $v0, -0x68C8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940472), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208BE8u, 0x20A308u, 0x20A310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A310u;
label_20a310:
    // 0x20a310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a314: 0xc08235a  jal         func_208D68
    ctx->pc = 0x20A314u;
    SET_GPR_U32(ctx, 31, 0x20A31Cu);
    ctx->pc = 0x20A318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A314u;
    // 0x20a318: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208D68u, 0x20A314u, 0x20A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A31Cu;
label_20a31c:
    // 0x20a31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a320: 0xc07c328  jal         func_1F0CA0
    ctx->pc = 0x20A320u;
    SET_GPR_U32(ctx, 31, 0x20A328u);
    ctx->pc = 0x20A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A320u;
    // 0x20a324: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0CA0u, 0x20A320u, 0x20A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A328u;
label_20a328:
    // 0x20a328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a32c: 0xc0a0b70  jal         func_282DC0
    ctx->pc = 0x20A32Cu;
    SET_GPR_U32(ctx, 31, 0x20A334u);
    ctx->pc = 0x20A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A32Cu;
    // 0x20a330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282DC0u, 0x20A32Cu, 0x20A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A334u;
label_20a334:
    // 0x20a334: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x20a334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x20a338: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x20a338u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x20a33c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20a33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20a340: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A340u;
    {
        const bool branch_taken_0x20a340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a340) {
            ctx->pc = 0x20A344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A340u;
            // 0x20a344: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A354u;
            goto label_20a354;
        }
    }
    ctx->pc = 0x20A348u;
    // 0x20a348: 0xc09d96c  jal         func_2765B0
    ctx->pc = 0x20A348u;
    SET_GPR_U32(ctx, 31, 0x20A350u);
    ctx->pc = 0x20A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A348u;
    // 0x20a34c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2765B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765B0u, 0x20A348u, 0x20A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A350u;
label_20a350:
    // 0x20a350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a354:
    // 0x20a354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a35c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20a35cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a364: 0x3e00008  jr          $ra
    ctx->pc = 0x20A364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A364u;
        // 0x20a368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A36Cu;
    // 0x20a36c: 0x0  nop
    ctx->pc = 0x20a36cu;
    // NOP
    ctx->pc = 0x20a370u;
}
