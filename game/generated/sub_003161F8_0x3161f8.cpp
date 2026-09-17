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

// Function: sub_003161F8
// Address: 0x3161f8 - 0x316578
void sub_003161F8_0x3161f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003161F8_0x3161f8");
#endif

    switch (ctx->pc) {
        case 0x3162c8u: goto label_3162c8;
        case 0x316300u: goto label_316300;
        case 0x316458u: goto label_316458;
        default: break;
    }

    ctx->pc = 0x3161f8u;

    // 0x3161f8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x3161f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3161fc: 0x2402011e  addiu       $v0, $zero, 0x11E
    ctx->pc = 0x3161fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x316200: 0x846ba  dsrl        $t0, $t0, 26
    ctx->pc = 0x316200u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 26);
    // 0x316204: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x316204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x316208: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x316208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31620c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31620cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x316210: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x316210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x316214: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x316214u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x316218: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x316218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31621c: 0x843fc  dsll32      $t0, $t0, 15
    ctx->pc = 0x31621cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 15));
    // 0x316220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x316220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x316224: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x316224u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316228: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x316228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x31622c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x316230: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x316230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x316234: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x316234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x316238: 0x3463f902  ori         $v1, $v1, 0xF902
    ctx->pc = 0x316238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63746);
    // 0x31623c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31623cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x316240: 0x34633f7f  ori         $v1, $v1, 0x3F7F
    ctx->pc = 0x316240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16255);
    // 0x316244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x316244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x316248: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x316248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31624c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31624cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316250: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x316250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x316254: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x316254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316258: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x316258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x31625c: 0x24140048  addiu       $s4, $zero, 0x48
    ctx->pc = 0x31625cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x316260: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x316260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x316264: 0x241500c8  addiu       $s5, $zero, 0xC8
    ctx->pc = 0x316264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x316268: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x316268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x31626c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x31626cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316270: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x316270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x316274: 0x7b83c  dsll32      $s7, $a3, 0
    ctx->pc = 0x316274u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) << (32 + 0));
    // 0x316278: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x316278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x31627c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x31627cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x316280: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x316280u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x316284: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x316284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x316288: 0xfd480000  sd          $t0, 0x0($t2)
    ctx->pc = 0x316288u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 8));
    // 0x31628c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x31628cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316290: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x316290u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x316294: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x316294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x316298: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x316298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31629c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x31629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x3162a0: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x3162a0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x3162a4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3162a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3162a8: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x3162a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3162ac: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x3162acu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x3162b0: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x3162b0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x3162b4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3162b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3162b8: 0x24906c00  addiu       $s0, $a0, 0x6C00
    ctx->pc = 0x3162b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x3162bc: 0x2e0c82d  daddu       $t9, $s7, $zero
    ctx->pc = 0x3162bcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162c0: 0x24896c80  addiu       $t1, $a0, 0x6C80
    ctx->pc = 0x3162c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 27776));
    // 0x3162c4: 0x168900  sll         $s1, $s6, 4
    ctx->pc = 0x3162c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_3162c8:
    // 0x3162c8: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x3162c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x3162cc: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3162ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3162d0: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x3162d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x3162d4: 0x9283c  dsll32      $a1, $t1, 0
    ctx->pc = 0x3162d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3162d8: 0x2c03e  dsrl32      $t8, $v0, 0
    ctx->pc = 0x3162d8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3162dc: 0x3783e  dsrl32      $t7, $v1, 0
    ctx->pc = 0x3162dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3162e0: 0x4703e  dsrl32      $t6, $a0, 0
    ctx->pc = 0x3162e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3162e4: 0x5683e  dsrl32      $t5, $a1, 0
    ctx->pc = 0x3162e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3162e8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3162e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162ec: 0x26277300  addiu       $a3, $s1, 0x7300
    ctx->pc = 0x3162ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
    // 0x3162f0: 0x26267220  addiu       $a2, $s1, 0x7220
    ctx->pc = 0x3162f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 29216));
    // 0x3162f4: 0x3c0b0064  lui         $t3, 0x64
    ctx->pc = 0x3162f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
    // 0x3162f8: 0x3c0801b4  lui         $t0, 0x1B4
    ctx->pc = 0x3162f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)436 << 16));
    // 0x3162fc: 0x0  nop
    ctx->pc = 0x3162fcu;
    // NOP
label_316300:
    // 0x316300: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x316300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x316304: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x316304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x316308: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x316308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x31630c: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x31630cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x316310: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x316310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x316314: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x316314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x316318: 0x1e21025  or          $v0, $t7, $v0
    ctx->pc = 0x316318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x31631c: 0x30b2025  or          $a0, $t8, $t3
    ctx->pc = 0x31631cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) | GPR_U64(ctx, 11));
    // 0x316320: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x316320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x316324: 0x1a31825  or          $v1, $t5, $v1
    ctx->pc = 0x316324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x316328: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x316328u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x31632c: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x31632cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x316330: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x316330u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x316334: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x316334u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316338: 0x1c81025  or          $v0, $t6, $t0
    ctx->pc = 0x316338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 8));
    // 0x31633c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x31633cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x316340: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x316340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
    // 0x316344: 0x2d850020  sltiu       $a1, $t4, 0x20
    ctx->pc = 0x316344u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x316348: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316348u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x31634c: 0x164582d  daddu       $t3, $t3, $a0
    ctx->pc = 0x31634cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 4));
    // 0x316350: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x316350u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x316354: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x316354u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316358: 0x14a0ffe9  bnez        $a1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x316358u;
    {
        const bool branch_taken_0x316358 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x31635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316358u;
        // 0x31635c: 0x104402d  daddu       $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316358) {
            ctx->pc = 0x316300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316300;
        }
    }
    ctx->pc = 0x316360u;
    // 0x316360: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x316360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x316364: 0x25290080  addiu       $t1, $t1, 0x80
    ctx->pc = 0x316364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
    // 0x316368: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x316368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x31636c: 0x26b50100  addiu       $s5, $s5, 0x100
    ctx->pc = 0x31636cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x316370: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x316370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x316374: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x316374u;
    {
        const bool branch_taken_0x316374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316374u;
        // 0x316378: 0x26940100  addiu       $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316374) {
            ctx->pc = 0x3162C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3162c8;
        }
    }
    ctx->pc = 0x31637Cu;
    // 0x31637c: 0x26480700  addiu       $t0, $s2, 0x700
    ctx->pc = 0x31637cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1792));
    // 0x316380: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x316380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x316384: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x316384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316388: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x316388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31638c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x31638cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x316390: 0x264406c0  addiu       $a0, $s2, 0x6C0
    ctx->pc = 0x316390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1728));
    // 0x316394: 0x264506d0  addiu       $a1, $s2, 0x6D0
    ctx->pc = 0x316394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x316398: 0x264606e0  addiu       $a2, $s2, 0x6E0
    ctx->pc = 0x316398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1760));
    // 0x31639c: 0x264706f0  addiu       $a3, $s2, 0x6F0
    ctx->pc = 0x31639cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1776));
    // 0x3163a0: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x3163a0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x3163a4: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x3163a4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x3163a8: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3163a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3163ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3163acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3163b0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3163b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3163b4: 0x34633f77  ori         $v1, $v1, 0x3F77
    ctx->pc = 0x3163b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16247);
    // 0x3163b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3163b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3163bc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3163bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3163c0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3163c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3163c4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x3163c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3163c8: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x3163c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3163cc: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x3163ccu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x3163d0: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x3163d0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x3163d4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3163d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3163d8: 0x164900  sll         $t1, $s6, 4
    ctx->pc = 0x3163d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x3163dc: 0x24160588  addiu       $s6, $zero, 0x588
    ctx->pc = 0x3163dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1416));
    // 0x3163e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3163e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3163e4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3163e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3163e8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3163e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3163ec: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3163ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3163f0: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x3163f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3163f4: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x3163f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x3163f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3163f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3163fc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3163fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x316400: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x316400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x316404: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316404u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x316408: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x316408u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x31640c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x31640cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316410: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x316410u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316414: 0x24170488  addiu       $s7, $zero, 0x488
    ctx->pc = 0x316414u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
    // 0x316418: 0x252e7200  addiu       $t6, $t1, 0x7200
    ctx->pc = 0x316418u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 29184));
    // 0x31641c: 0x25297220  addiu       $t1, $t1, 0x7220
    ctx->pc = 0x31641cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29216));
    // 0x316420: 0x4903e  dsrl32      $s2, $a0, 0
    ctx->pc = 0x316420u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x316424: 0x5883e  dsrl32      $s1, $a1, 0
    ctx->pc = 0x316424u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x316428: 0x6803e  dsrl32      $s0, $a2, 0
    ctx->pc = 0x316428u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x31642c: 0x7783e  dsrl32      $t7, $a3, 0
    ctx->pc = 0x31642cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x316430: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x316430u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x316434: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x316434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316438: 0x241e0188  addiu       $fp, $zero, 0x188
    ctx->pc = 0x316438u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x31643c: 0x24190288  addiu       $t9, $zero, 0x288
    ctx->pc = 0x31643cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 648));
    // 0x316440: 0x24180388  addiu       $t8, $zero, 0x388
    ctx->pc = 0x316440u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x316444: 0x24150688  addiu       $s5, $zero, 0x688
    ctx->pc = 0x316444u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1672));
    // 0x316448: 0x24140788  addiu       $s4, $zero, 0x788
    ctx->pc = 0x316448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1928));
    // 0x31644c: 0x3c0d0008  lui         $t5, 0x8
    ctx->pc = 0x31644cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8 << 16));
    // 0x316450: 0x3c0c0028  lui         $t4, 0x28
    ctx->pc = 0x316450u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)40 << 16));
    // 0x316454: 0x0  nop
    ctx->pc = 0x316454u;
    // NOP
label_316458:
    // 0x316458: 0xe303c  dsll32      $a2, $t6, 0
    ctx->pc = 0x316458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) << (32 + 0));
    // 0x31645c: 0x25ce0040  addiu       $t6, $t6, 0x40
    ctx->pc = 0x31645cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
    // 0x316460: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x316460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x316464: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x316464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
    // 0x316468: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x316468u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x31646c: 0x2461025  or          $v0, $s2, $a2
    ctx->pc = 0x31646cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
    // 0x316470: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x316470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x316474: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x316474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x316478: 0x1a41825  or          $v1, $t5, $a0
    ctx->pc = 0x316478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x31647c: 0x2272025  or          $a0, $s1, $a3
    ctx->pc = 0x31647cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x316480: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x316480u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x316484: 0x2261825  or          $v1, $s1, $a2
    ctx->pc = 0x316484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x316488: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x316488u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x31648c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x31648cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316490: 0x19e1025  or          $v0, $t4, $fp
    ctx->pc = 0x316490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 30));
    // 0x316494: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x316494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x316498: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316498u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x31649c: 0x1b91025  or          $v0, $t5, $t9
    ctx->pc = 0x31649cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 25));
    // 0x3164a0: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x3164a0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x3164a4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3164a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3164a8: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x3164a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x3164ac: 0x2072025  or          $a0, $s0, $a3
    ctx->pc = 0x3164acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
    // 0x3164b0: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x3164b0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x3164b4: 0x1981025  or          $v0, $t4, $t8
    ctx->pc = 0x3164b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 24));
    // 0x3164b8: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x3164b8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x3164bc: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3164bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3164c0: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x3164c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x3164c4: 0x2062825  or          $a1, $s0, $a2
    ctx->pc = 0x3164c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x3164c8: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x3164c8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x3164cc: 0x1b71025  or          $v0, $t5, $s7
    ctx->pc = 0x3164ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 23));
    // 0x3164d0: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x3164d0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x3164d4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3164d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3164d8: 0x1e71825  or          $v1, $t7, $a3
    ctx->pc = 0x3164d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
    // 0x3164dc: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3164dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3164e0: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x3164e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x3164e4: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x3164e4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x3164e8: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x3164e8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x3164ec: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3164ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3164f0: 0x1961025  or          $v0, $t4, $s6
    ctx->pc = 0x3164f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 22));
    // 0x3164f4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x3164f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x3164f8: 0x1e63025  or          $a2, $t7, $a2
    ctx->pc = 0x3164f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) | GPR_U64(ctx, 6));
    // 0x3164fc: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x3164fcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x316500: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316500u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x316504: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x316504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316508: 0x1b51025  or          $v0, $t5, $s5
    ctx->pc = 0x316508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 21));
    // 0x31650c: 0xcb3025  or          $a2, $a2, $t3
    ctx->pc = 0x31650cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x316510: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x316510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x316514: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316514u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x316518: 0xfd460008  sd          $a2, 0x8($t2)
    ctx->pc = 0x316518u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 6));
    // 0x31651c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x31651cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316520: 0x1941025  or          $v0, $t4, $s4
    ctx->pc = 0x316520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 20));
    // 0x316524: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x316524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x316528: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x316528u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x31652c: 0x2e640020  sltiu       $a0, $s3, 0x20
    ctx->pc = 0x31652cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x316530: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316530u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x316534: 0x1a3682d  daddu       $t5, $t5, $v1
    ctx->pc = 0x316534u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x316538: 0xfd470008  sd          $a3, 0x8($t2)
    ctx->pc = 0x316538u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 7));
    // 0x31653c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x31653cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316540: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x316540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x316544: 0x1480ffc4  bnez        $a0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x316544u;
    {
        const bool branch_taken_0x316544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x316548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316544u;
        // 0x316548: 0x183602d  daddu       $t4, $t4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316544) {
            ctx->pc = 0x316458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316458;
        }
    }
    ctx->pc = 0x31654Cu;
    // 0x31654c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31654cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316550: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x316550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x316554: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x316554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316558: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x316558u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31655c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x31655cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316560: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x316560u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x316564: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x316564u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316568: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x316568u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31656c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x31656cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316570: 0x3e00008  jr          $ra
    ctx->pc = 0x316570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316570u;
        // 0x316574: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316578u;
}
