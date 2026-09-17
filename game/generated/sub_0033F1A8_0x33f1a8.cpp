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

// Function: sub_0033F1A8
// Address: 0x33f1a8 - 0x33f348
void sub_0033F1A8_0x33f1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F1A8_0x33f1a8");
#endif

    switch (ctx->pc) {
        case 0x33f204u: goto label_33f204;
        case 0x33f21cu: goto label_33f21c;
        case 0x33f238u: goto label_33f238;
        case 0x33f290u: goto label_33f290;
        case 0x33f300u: goto label_33f300;
        default: break;
    }

    ctx->pc = 0x33f1a8u;

label_33f1a8:
    // 0x33f1a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33f1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33f1ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33f1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33f1b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33f1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f1b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33f1b8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x33f1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f1bc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x33f1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x33f1c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33f1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33f1c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33f1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33f1c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x33f1c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f1cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x33f1d0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x33f1d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f1d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f1d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33f1d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f1dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x33f1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x33f1e0: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x33F1E0u;
    {
        const bool branch_taken_0x33f1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1E0u;
        // 0x33f1e4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f1e0) {
            ctx->pc = 0x33F31Cu;
            goto label_33f31c;
        }
    }
    ctx->pc = 0x33F1E8u;
    // 0x33f1e8: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x33f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x33f1ec: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x33f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x33f1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f1f4: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x33f1f4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x33f1f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33f1f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f1fc: 0xc0cfc6a  jal         func_33F1A8
    ctx->pc = 0x33F1FCu;
    SET_GPR_U32(ctx, 31, 0x33F204u);
    ctx->pc = 0x33F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F1FCu;
    // 0x33f200: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F1A8u;
    goto label_33f1a8;
    ctx->pc = 0x33F204u;
label_33f204:
    // 0x33f204: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33f204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f208: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33f208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f20c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x33f20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f210: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33f210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f214: 0xc0cfc6a  jal         func_33F1A8
    ctx->pc = 0x33F214u;
    SET_GPR_U32(ctx, 31, 0x33F21Cu);
    ctx->pc = 0x33F218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F214u;
    // 0x33f218: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F1A8u;
    goto label_33f1a8;
    ctx->pc = 0x33F21Cu;
label_33f21c:
    // 0x33f21c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f220: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x33f220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33f224: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33F224u;
    {
        const bool branch_taken_0x33f224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F224u;
        // 0x33f228: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f224) {
            ctx->pc = 0x33F258u;
            goto label_33f258;
        }
    }
    ctx->pc = 0x33F22Cu;
    // 0x33f22c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x33f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33f230: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x33f230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f234: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x33f234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_33f238:
    // 0x33f238: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x33f238u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33f23c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x33f23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x33f240: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33f240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33f244: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x33f244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x33f248: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x33f248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33f24c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x33f24cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x33f250: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x33F250u;
    {
        const bool branch_taken_0x33f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F250u;
        // 0x33f254: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f250) {
            ctx->pc = 0x33F238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f238;
        }
    }
    ctx->pc = 0x33F258u;
label_33f258:
    // 0x33f258: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x33f258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f25c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33f25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f260: 0x244482a  slt         $t1, $s2, $a0
    ctx->pc = 0x33f260u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33f264: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33f264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f268: 0x1520001f  bnez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x33F268u;
    {
        const bool branch_taken_0x33f268 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F268u;
        // 0x33f26c: 0xa102a  slt         $v0, $zero, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f268) {
            ctx->pc = 0x33F2E8u;
            goto label_33f2e8;
        }
    }
    ctx->pc = 0x33F270u;
    // 0x33f270: 0x5940002b  blezl       $t2, . + 4 + (0x2B << 2)
    ctx->pc = 0x33F270u;
    {
        const bool branch_taken_0x33f270 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x33f270) {
            ctx->pc = 0x33F274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F270u;
            // 0x33f274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F320u;
            goto label_33f320;
        }
    }
    ctx->pc = 0x33F278u;
    // 0x33f278: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x33f278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33f27c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x33f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33f280: 0x533821  addu        $a3, $v0, $s3
    ctx->pc = 0x33f280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33f284: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x33f284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33f288: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33f288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f28c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x33f28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33f290:
    // 0x33f290: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x33f290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f294: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33f294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33f298: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x33F298u;
    {
        const bool branch_taken_0x33f298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33f298) {
            ctx->pc = 0x33F29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F298u;
            // 0x33f29c: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F2C0u;
            goto label_33f2c0;
        }
    }
    ctx->pc = 0x33F2A0u;
    // 0x33f2a0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x33f2a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33f2a4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x33f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x33f2a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33f2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33f2ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33f2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33f2b0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x33f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x33f2b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33F2B4u;
    {
        const bool branch_taken_0x33f2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F2B4u;
        // 0x33f2b8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f2b4) {
            ctx->pc = 0x33F2D8u;
            goto label_33f2d8;
        }
    }
    ctx->pc = 0x33F2BCu;
    // 0x33f2bc: 0x0  nop
    ctx->pc = 0x33f2bcu;
    // NOP
label_33f2c0:
    // 0x33f2c0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x33f2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x33f2c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33f2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33f2c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33f2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33f2cc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x33f2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x33f2d0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x33f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x33f2d4: 0x244482a  slt         $t1, $s2, $a0
    ctx->pc = 0x33f2d4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_33f2d8:
    // 0x33f2d8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F2D8u;
    {
        const bool branch_taken_0x33f2d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F2D8u;
        // 0x33f2dc: 0x10a102a  slt         $v0, $t0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f2d8) {
            ctx->pc = 0x33F2E8u;
            goto label_33f2e8;
        }
    }
    ctx->pc = 0x33F2E0u;
    // 0x33f2e0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x33F2E0u;
    {
        const bool branch_taken_0x33f2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f2e0) {
            ctx->pc = 0x33F2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F2E0u;
            // 0x33f2e4: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f290;
        }
    }
    ctx->pc = 0x33F2E8u;
label_33f2e8:
    // 0x33f2e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33F2E8u;
    {
        const bool branch_taken_0x33f2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F2E8u;
        // 0x33f2ec: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f2e8) {
            ctx->pc = 0x33F31Cu;
            goto label_33f31c;
        }
    }
    ctx->pc = 0x33F2F0u;
    // 0x33f2f0: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x33f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x33f2f4: 0x1484023  subu        $t0, $t2, $t0
    ctx->pc = 0x33f2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x33f2f8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x33f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x33f2fc: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x33f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_33f300:
    // 0x33f300: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x33f300u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f304: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x33f304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x33f308: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x33f308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x33f30c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x33f30cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x33f310: 0x0  nop
    ctx->pc = 0x33f310u;
    // NOP
    // 0x33f314: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33F314u;
    {
        const bool branch_taken_0x33f314 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F314u;
        // 0x33f318: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f314) {
            ctx->pc = 0x33F300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f300;
        }
    }
    ctx->pc = 0x33F31Cu;
label_33f31c:
    // 0x33f31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33f320:
    // 0x33f320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33f320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f324: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33f324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f328: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33f328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f32c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33f32cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f330: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x33f330u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f334: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x33f334u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f338: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x33f338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f33c: 0x3e00008  jr          $ra
    ctx->pc = 0x33F33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F33Cu;
        // 0x33f340: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F344u;
    // 0x33f344: 0x0  nop
    ctx->pc = 0x33f344u;
    // NOP
    ctx->pc = 0x33f348u;
}
