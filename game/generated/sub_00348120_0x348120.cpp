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

// Function: sub_00348120
// Address: 0x348120 - 0x348258
void sub_00348120_0x348120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348120_0x348120");
#endif

    switch (ctx->pc) {
        case 0x348160u: goto label_348160;
        case 0x3481e8u: goto label_3481e8;
        default: break;
    }

    ctx->pc = 0x348120u;

    // 0x348120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x348120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x348124: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x348124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x348128: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x348128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34812c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34812cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348130: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x348130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x348134: 0x2068821  addu        $s1, $s0, $a2
    ctx->pc = 0x348134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x348138: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x348138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34813c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34813cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348140: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x348140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x348144: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x348144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x348148: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x348148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34814c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x34814cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x348150: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x348150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x348154: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x348154u;
    {
        const bool branch_taken_0x348154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x348158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348154u;
        // 0x348158: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348154) {
            ctx->pc = 0x348234u;
            goto label_348234;
        }
    }
    ctx->pc = 0x34815Cu;
    // 0x34815c: 0x39120006  xori        $s2, $t0, 0x6
    ctx->pc = 0x34815cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)6);
label_348160:
    // 0x348160: 0x2462ff7f  addiu       $v0, $v1, -0x81
    ctx->pc = 0x348160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967167));
    // 0x348164: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x348164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x348168: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x348168u;
    {
        const bool branch_taken_0x348168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348168u;
        // 0x34816c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348168) {
            ctx->pc = 0x348184u;
            goto label_348184;
        }
    }
    ctx->pc = 0x348170u;
    // 0x348170: 0x2462ff20  addiu       $v0, $v1, -0xE0
    ctx->pc = 0x348170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
    // 0x348174: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x348174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x348178: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x348178u;
    {
        const bool branch_taken_0x348178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348178u;
        // 0x34817c: 0x2462ff5f  addiu       $v0, $v1, -0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348178) {
            ctx->pc = 0x3481B8u;
            goto label_3481b8;
        }
    }
    ctx->pc = 0x348180u;
    // 0x348180: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x348180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_348184:
    // 0x348184: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x348184u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x348188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34818c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x34818cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x348190: 0x2483ffc0  addiu       $v1, $a0, -0x40
    ctx->pc = 0x348190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x348194: 0x2c6300bd  sltiu       $v1, $v1, 0xBD
    ctx->pc = 0x348194u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)189) ? 1 : 0);
    // 0x348198: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x348198u;
    {
        const bool branch_taken_0x348198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348198u;
        // 0x34819c: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348198) {
            ctx->pc = 0x34821Cu;
            goto label_34821c;
        }
    }
    ctx->pc = 0x3481A0u;
    // 0x3481a0: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x3481a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3481a4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3481a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3481a8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3481A8u;
    {
        const bool branch_taken_0x3481a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3481ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481A8u;
        // 0x3481ac: 0x93a20004  lbu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481a8) {
            ctx->pc = 0x3481ECu;
            goto label_3481ec;
        }
    }
    ctx->pc = 0x3481B0u;
    // 0x3481b0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3481B0u;
    {
        const bool branch_taken_0x3481b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3481B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481B0u;
        // 0x3481b4: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481b0) {
            ctx->pc = 0x348238u;
            goto label_348238;
        }
    }
    ctx->pc = 0x3481B8u;
label_3481b8:
    // 0x3481b8: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x3481b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x3481bc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3481BCu;
    {
        const bool branch_taken_0x3481bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3481bc) {
            ctx->pc = 0x3481C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3481BCu;
            // 0x3481c0: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348208u;
            goto label_348208;
        }
    }
    ctx->pc = 0x3481C4u;
    // 0x3481c4: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x3481c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3481c8: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3481c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3481cc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3481CCu;
    {
        const bool branch_taken_0x3481cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3481D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481CCu;
        // 0x3481d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481cc) {
            ctx->pc = 0x348234u;
            goto label_348234;
        }
    }
    ctx->pc = 0x3481D4u;
    // 0x3481d4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x3481d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3481d8: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x3481d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3481dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3481dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3481e0: 0xc0d2240  jal         func_348900
    ctx->pc = 0x3481E0u;
    SET_GPR_U32(ctx, 31, 0x3481E8u);
    ctx->pc = 0x3481E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3481E0u;
    // 0x3481e4: 0x2e480001  sltiu       $t0, $s2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x348900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348900u, 0x3481E0u, 0x3481E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481E8u;
label_3481e8:
    // 0x3481e8: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x3481e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
label_3481ec:
    // 0x3481ec: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3481ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3481f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3481f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3481f4: 0x93a20008  lbu         $v0, 0x8($sp)
    ctx->pc = 0x3481f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3481f8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3481f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3481fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3481FCu;
    {
        const bool branch_taken_0x3481fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481FCu;
        // 0x348200: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481fc) {
            ctx->pc = 0x34821Cu;
            goto label_34821c;
        }
    }
    ctx->pc = 0x348204u;
    // 0x348204: 0x0  nop
    ctx->pc = 0x348204u;
    // NOP
label_348208:
    // 0x348208: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x348208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x34820c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34820Cu;
    {
        const bool branch_taken_0x34820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34820Cu;
        // 0x348210: 0x93a20004  lbu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34820c) {
            ctx->pc = 0x348234u;
            goto label_348234;
        }
    }
    ctx->pc = 0x348214u;
    // 0x348214: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x348214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x348218: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x348218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34821c:
    // 0x34821c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348220: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x348220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x348224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x348228: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x348228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34822c: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x34822Cu;
    {
        const bool branch_taken_0x34822c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x348230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34822Cu;
        // 0x348230: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34822c) {
            ctx->pc = 0x348160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348160;
        }
    }
    ctx->pc = 0x348234u;
label_348234:
    // 0x348234: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x348234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_348238:
    // 0x348238: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x348238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34823c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34823cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x348240: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x348240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348244: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x348244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x348248: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x348248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34824c: 0x3e00008  jr          $ra
    ctx->pc = 0x34824Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34824Cu;
        // 0x348250: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34824Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348254u;
    // 0x348254: 0x0  nop
    ctx->pc = 0x348254u;
    // NOP
    ctx->pc = 0x348258u;
}
