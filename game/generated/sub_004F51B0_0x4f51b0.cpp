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

// Function: sub_004F51B0
// Address: 0x4f51b0 - 0x4f5600
void sub_004F51B0_0x4f51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F51B0_0x4f51b0");
#endif

    switch (ctx->pc) {
        case 0x4f51e8u: goto label_4f51e8;
        case 0x4f520cu: goto label_4f520c;
        case 0x4f535cu: goto label_4f535c;
        case 0x4f5364u: goto label_4f5364;
        case 0x4f53a0u: goto label_4f53a0;
        case 0x4f548cu: goto label_4f548c;
        case 0x4f5494u: goto label_4f5494;
        case 0x4f549cu: goto label_4f549c;
        case 0x4f551cu: goto label_4f551c;
        case 0x4f5524u: goto label_4f5524;
        case 0x4f552cu: goto label_4f552c;
        case 0x4f55ccu: goto label_4f55cc;
        default: break;
    }

    ctx->pc = 0x4f51b0u;

    // 0x4f51b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4f51b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4f51b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4f51b8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4f51b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4f51bc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4f51bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4f51c0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4f51c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f51c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4f51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4f51c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4f51c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4f51cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4f51ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4f51d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4f51d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4f51d4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4f51d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4f51d8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4f51d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4f51dc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4f51dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4f51e0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F51E0u;
    SET_GPR_U32(ctx, 31, 0x4F51E8u);
    ctx->pc = 0x4F51E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F51E0u;
    // 0x4f51e4: 0x27d101b4  addiu       $s1, $fp, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F51E0u, 0x4F51E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F51E8u;
label_4f51e8:
    // 0x4f51e8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4f51e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x4f51ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4f51ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f51f0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f51f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f51f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4f51f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4f51f8: 0x4400061  bltz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x4F51F8u;
    {
        const bool branch_taken_0x4f51f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F51F8u;
        // 0x4f51fc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f51f8) {
            ctx->pc = 0x4F5380u;
            goto label_4f5380;
        }
    }
    ctx->pc = 0x4F5200u;
    // 0x4f5200: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4f5200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5204: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F5204u;
    SET_GPR_U32(ctx, 31, 0x4F520Cu);
    ctx->pc = 0x4F5208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5204u;
    // 0x4f5208: 0x27d0015e  addiu       $s0, $fp, 0x15E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 350));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F5204u, 0x4F520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F520Cu;
label_4f520c:
    // 0x4f520c: 0x87c30008  lh          $v1, 0x8($fp)
    ctx->pc = 0x4f520cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x4f5210: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4f5210u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4f5214: 0x27ac0004  addiu       $t4, $sp, 0x4
    ctx->pc = 0x4f5214u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4f5218: 0x2463ff47  addiu       $v1, $v1, -0xB9
    ctx->pc = 0x4f5218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967111));
    // 0x4f521c: 0x27ab0008  addiu       $t3, $sp, 0x8
    ctx->pc = 0x4f521cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4f5220: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f5220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f5224: 0x3c0a0073  lui         $t2, 0x73
    ctx->pc = 0x4f5224u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)115 << 16));
    // 0x4f5228: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f5228u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f522c: 0x254ad680  addiu       $t2, $t2, -0x2980
    ctx->pc = 0x4f522cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
    // 0x4f5230: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4f5230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f5234: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4f5234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f5238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f523c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f523cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f5240: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4f5240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4f5244: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x4f5244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x4f5248: 0x242181e8  addiu       $at, $at, -0x7E18
    ctx->pc = 0x4f5248u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294935016));
    // 0x4f524c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4f524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4f5250: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x4f5250u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f5254: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f5254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f5258: 0xa7c5000c  sh          $a1, 0xC($fp)
    ctx->pc = 0x4f5258u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f525c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f525cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f5260: 0xa7c3015a  sh          $v1, 0x15A($fp)
    ctx->pc = 0x4f5260u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5264: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x4f5264u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4f5268: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x4f5268u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f526c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x4f526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x4f5270: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x4f5270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x4f5274: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4f5274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5278: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4f5278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4f527c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4f527cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f5280: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4f5280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4f5284: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x4f5284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f5288: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f528c: 0x87c60012  lh          $a2, 0x12($fp)
    ctx->pc = 0x4f528cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x4f5290: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f5290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f5294: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f5294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f5298: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4f5298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4f529c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4f529cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4f52a0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f52a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f52a4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f52a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f52a8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f52a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f52ac: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4f52acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4f52b0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4f52b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4f52b4: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4f52b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4f52b8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f52b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f52bc: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x4f52bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x4f52c0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f52c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f52c4: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x4f52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x4f52c8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f52c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f52cc: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f52ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f52d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f52d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f52d4: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x4f52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x4f52d8: 0x97c60118  lhu         $a2, 0x118($fp)
    ctx->pc = 0x4f52d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x4f52dc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4f52dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4f52e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f52e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f52e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f52e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f52e8: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4f52e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4f52ec: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f52ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f52f0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f52f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f52f4: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x4f52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x4f52f8: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4f52f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f52fc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4f52fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4f5300: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x4f5300u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5304: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5308: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f5308u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f530c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4f530cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4f5310: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4f5310u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f5314: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x4f5314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x4f5318: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x4f5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x4f531c: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4f531cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f5320: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4f5320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4f5324: 0xa7c50130  sh          $a1, 0x130($fp)
    ctx->pc = 0x4f5324u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 304), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f5328: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5328u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f532c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f532cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f5330: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4f5330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4f5334: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4f5334u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4f5338: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x4f5338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x4f533c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4f533cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f5340: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4f5340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f5344: 0xa7c20132  sh          $v0, 0x132($fp)
    ctx->pc = 0x4f5344u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f5348: 0xa7c30134  sh          $v1, 0x134($fp)
    ctx->pc = 0x4f5348u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 308), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f534c: 0xa54624a0  sh          $a2, 0x24A0($t2)
    ctx->pc = 0x4f534cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 9376), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f5350: 0x97c2011c  lhu         $v0, 0x11C($fp)
    ctx->pc = 0x4f5350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 284)));
    // 0x4f5354: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4F5354u;
    SET_GPR_U32(ctx, 31, 0x4F535Cu);
    ctx->pc = 0x4F5358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5354u;
    // 0x4f5358: 0xa54224a2  sh          $v0, 0x24A2($t2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 10), 9378), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4F5354u, 0x4F535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F535Cu;
label_4f535c:
    // 0x4f535c: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4F535Cu;
    SET_GPR_U32(ctx, 31, 0x4F5364u);
    ctx->pc = 0x4F5360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F535Cu;
    // 0x4f5360: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4F535Cu, 0x4F5364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5364u;
label_4f5364:
    // 0x4f5364: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f5364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f5368: 0xa7c301b6  sh          $v1, 0x1B6($fp)
    ctx->pc = 0x4f5368u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f536c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f536cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f5370: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f5370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f5374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4F5374u;
    {
        const bool branch_taken_0x4f5374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5374u;
        // 0x4f5378: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5374) {
            ctx->pc = 0x4F5384u;
            goto label_4f5384;
        }
    }
    ctx->pc = 0x4F537Cu;
    // 0x4f537c: 0x0  nop
    ctx->pc = 0x4f537cu;
    // NOP
label_4f5380:
    // 0x4f5380: 0x27d0015e  addiu       $s0, $fp, 0x15E
    ctx->pc = 0x4f5380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 350));
label_4f5384:
    // 0x4f5384: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f5384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f5388: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f5388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4f538c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4f538cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f5390: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F5390u;
    {
        const bool branch_taken_0x4f5390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5390u;
        // 0x4f5394: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5390) {
            ctx->pc = 0x4F53A8u;
            goto label_4f53a8;
        }
    }
    ctx->pc = 0x4F5398u;
    // 0x4f5398: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4F5398u;
    SET_GPR_U32(ctx, 31, 0x4F53A0u);
    ctx->pc = 0x4F539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5398u;
    // 0x4f539c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4F5398u, 0x4F53A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F53A0u;
label_4f53a0:
    // 0x4f53a0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x4F53A0u;
    {
        const bool branch_taken_0x4f53a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F53A0u;
        // 0x4f53a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f53a0) {
            ctx->pc = 0x4F55D0u;
            goto label_4f55d0;
        }
    }
    ctx->pc = 0x4F53A8u;
label_4f53a8:
    // 0x4f53a8: 0x27c20134  addiu       $v0, $fp, 0x134
    ctx->pc = 0x4f53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 308));
    // 0x4f53ac: 0x27d60130  addiu       $s6, $fp, 0x130
    ctx->pc = 0x4f53acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 304));
    // 0x4f53b0: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x4f53b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x4f53b4: 0x27d70132  addiu       $s7, $fp, 0x132
    ctx->pc = 0x4f53b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 306));
    // 0x4f53b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4f53b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f53bc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f53bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f53c0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4f53c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f53c4: 0x26b30050  addiu       $s3, $s5, 0x50
    ctx->pc = 0x4f53c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x4f53c8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4f53c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f53cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f53ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f53d0: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4f53d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f53d4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f53d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f53d8: 0x86e40000  lh          $a0, 0x0($s7)
    ctx->pc = 0x4f53d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f53dc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f53dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f53e0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x4f53e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f53e4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f53e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f53e8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4f53e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4f53ec: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f53ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f53f0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f53f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f53f4: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4f53f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4f53f8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4f53f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4f53fc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f53fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f5400: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4f5400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4f5404: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f5404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f5408: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4f5408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4f540c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f540cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f5410: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f5410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5414: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f5414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f5418: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f5418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f541c: 0x26b40054  addiu       $s4, $s5, 0x54
    ctx->pc = 0x4f541cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
    // 0x4f5420: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x4f5420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4f5424: 0x26b50058  addiu       $s5, $s5, 0x58
    ctx->pc = 0x4f5424u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 88));
    // 0x4f5428: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f5428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f542c: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4f542cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4f5430: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f5434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5438: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f5438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f543c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f543cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f5440: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f5440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f5444: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f5444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f5448: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4f5448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f544c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4f544cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f5450: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f5450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f5454: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5454u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5458: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f5458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f545c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f545cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f5460: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4f5460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f5464: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4f5464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4f5468: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f5468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f546c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f546cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f5470: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f5470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f5474: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5474u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5478: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f5478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f547c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f547cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f5480: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4f5480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f5484: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F5484u;
    SET_GPR_U32(ctx, 31, 0x4F548Cu);
    ctx->pc = 0x4F5488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5484u;
    // 0x4f5488: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F5484u, 0x4F548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F548Cu;
label_4f548c:
    // 0x4f548c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F548Cu;
    SET_GPR_U32(ctx, 31, 0x4F5494u);
    ctx->pc = 0x4F5490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F548Cu;
    // 0x4f5490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F548Cu, 0x4F5494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5494u;
label_4f5494:
    // 0x4f5494: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F5494u;
    SET_GPR_U32(ctx, 31, 0x4F549Cu);
    ctx->pc = 0x4F5498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5494u;
    // 0x4f5498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F5494u, 0x4F549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F549Cu;
label_4f549c:
    // 0x4f549c: 0x27cc0010  addiu       $t4, $fp, 0x10
    ctx->pc = 0x4f549cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x4f54a0: 0x27cd0014  addiu       $t5, $fp, 0x14
    ctx->pc = 0x4f54a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x4f54a4: 0x27ce0018  addiu       $t6, $fp, 0x18
    ctx->pc = 0x4f54a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x4f54a8: 0x85880000  lh          $t0, 0x0($t4)
    ctx->pc = 0x4f54a8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f54ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f54acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f54b0: 0x85a70000  lh          $a3, 0x0($t5)
    ctx->pc = 0x4f54b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4f54b4: 0x85c60000  lh          $a2, 0x0($t6)
    ctx->pc = 0x4f54b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4f54b8: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4f54b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4f54bc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4f54bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f54c0: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4f54c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4f54c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4f54c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f54c8: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4f54c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4f54cc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4f54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f54d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f54d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f54d4: 0x8fc90128  lw          $t1, 0x128($fp)
    ctx->pc = 0x4f54d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
    // 0x4f54d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f54d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f54dc: 0x8fcb0124  lw          $t3, 0x124($fp)
    ctx->pc = 0x4f54dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
    // 0x4f54e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f54e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f54e4: 0x8fca012c  lw          $t2, 0x12C($fp)
    ctx->pc = 0x4f54e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 300)));
    // 0x4f54e8: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4f54e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4f54ec: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f54ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4f54f0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4f54f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4f54f4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4f54f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4f54f8: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x4f54f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x4f54fc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4f54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4f5500: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4f5500u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4f5504: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4f5504u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4f5508: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4f5508u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4f550c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f550cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4f5510: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4f5510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4f5514: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F5514u;
    SET_GPR_U32(ctx, 31, 0x4F551Cu);
    ctx->pc = 0x4F5518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5514u;
    // 0x4f5518: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F5514u, 0x4F551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F551Cu;
label_4f551c:
    // 0x4f551c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F551Cu;
    SET_GPR_U32(ctx, 31, 0x4F5524u);
    ctx->pc = 0x4F5520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F551Cu;
    // 0x4f5520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F551Cu, 0x4F5524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5524u;
label_4f5524:
    // 0x4f5524: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F5524u;
    SET_GPR_U32(ctx, 31, 0x4F552Cu);
    ctx->pc = 0x4F5528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5524u;
    // 0x4f5528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F5524u, 0x4F552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F552Cu;
label_4f552c:
    // 0x4f552c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f5530: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x4f5530u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5534: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4f5534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5538: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f5538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f553c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4f553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5540: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5540u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5544: 0x87a70004  lh          $a3, 0x4($sp)
    ctx->pc = 0x4f5544u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f5548: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4f5548u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f554c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f554cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f5550: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f5550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f5554: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4f5554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f5558: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4f5558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4f555c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f555cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5560: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f5560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f5564: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f5564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f5568: 0x87a80008  lh          $t0, 0x8($sp)
    ctx->pc = 0x4f5568u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f556c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4f556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f5570: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4f5570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f5574: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f5574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f5578: 0x97a90000  lhu         $t1, 0x0($sp)
    ctx->pc = 0x4f5578u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f557c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f557cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5580: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f5580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f5584: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4f5584u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f5588: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4f5588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4f558c: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4f558cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4f5590: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4f5590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4f5594: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f5594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f5598: 0x97a60004  lhu         $a2, 0x4($sp)
    ctx->pc = 0x4f5598u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f559c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f55a0: 0xa6c90000  sh          $t1, 0x0($s6)
    ctx->pc = 0x4f55a0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x4f55a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f55a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f55a8: 0xa6e60000  sh          $a2, 0x0($s7)
    ctx->pc = 0x4f55a8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f55ac: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4f55acu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4f55b0: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4f55b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4f55b4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4f55b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4f55b8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4f55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4f55bc: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4f55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4f55c0: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x4f55c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f55c4: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4F55C4u;
    SET_GPR_U32(ctx, 31, 0x4F55CCu);
    ctx->pc = 0x4F55C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F55C4u;
    // 0x4f55c8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4F55C4u, 0x4F55CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F55CCu;
label_4f55cc:
    // 0x4f55cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4f55ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f55d0:
    // 0x4f55d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4f55d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f55d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4f55d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f55d8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4f55d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f55dc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4f55dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f55e0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4f55e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f55e4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4f55e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f55e8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4f55e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f55ec: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4f55ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4f55f0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4f55f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4f55f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F55F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F55F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F55F4u;
        // 0x4f55f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F55F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F55FCu;
    // 0x4f55fc: 0x0  nop
    ctx->pc = 0x4f55fcu;
    // NOP
    ctx->pc = 0x4f5600u;
}
