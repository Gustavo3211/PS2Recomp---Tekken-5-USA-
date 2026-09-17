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

// Function: sub_004EC228
// Address: 0x4ec228 - 0x4ec4a8
void sub_004EC228_0x4ec228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC228_0x4ec228");
#endif

    switch (ctx->pc) {
        case 0x4ec3c4u: goto label_4ec3c4;
        default: break;
    }

    ctx->pc = 0x4ec228u;

    // 0x4ec228: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ec228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ec22c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4ec22cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4ec230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ec230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ec234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ec234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec238: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ec238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ec23c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4ec23cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4ec240: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ec240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ec244: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x4ec244u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4ec248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ec248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ec24c: 0x26130014  addiu       $s3, $s0, 0x14
    ctx->pc = 0x4ec24cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4ec250: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ec250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ec254: 0x26140018  addiu       $s4, $s0, 0x18
    ctx->pc = 0x4ec254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4ec258: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ec258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ec25c: 0x26150122  addiu       $s5, $s0, 0x122
    ctx->pc = 0x4ec25cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 290));
    // 0x4ec260: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ec260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ec264: 0x2616011a  addiu       $s6, $s0, 0x11A
    ctx->pc = 0x4ec264u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 282));
    // 0x4ec268: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ec268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4ec26c: 0x2617011e  addiu       $s7, $s0, 0x11E
    ctx->pc = 0x4ec26cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 286));
    // 0x4ec270: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ec270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4ec274: 0x254a11f4  addiu       $t2, $t2, 0x11F4
    ctx->pc = 0x4ec274u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4596));
    // 0x4ec278: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4ec278u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4ec27c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4ec27cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4ec280: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4ec280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ec284: 0x258c11f8  addiu       $t4, $t4, 0x11F8
    ctx->pc = 0x4ec284u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4600));
    // 0x4ec288: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4ec288u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F11F4u));
    // 0x4ec28c: 0x256b11fc  addiu       $t3, $t3, 0x11FC
    ctx->pc = 0x4ec28cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4604));
    // 0x4ec290: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec294: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4ec294u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11F8u));
    // 0x4ec298: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ec298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ec29c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ec29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ec2a0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ec2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ec2a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ec2a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ec2a8: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4ec2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4ec2ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ec2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ec2b0: 0x246d11ec  addiu       $t5, $v1, 0x11EC
    ctx->pc = 0x4ec2b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4588));
    // 0x4ec2b4: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4ec2b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ec2b8: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4ec2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ec2bc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec2c0: 0x85490000  lh          $t1, 0x0($t2)
    ctx->pc = 0x4ec2c0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ec2c4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ec2c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ec2c8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ec2c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ec2cc: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4ec2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4ec2d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ec2d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ec2d4: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4ec2d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ec2d8: 0x85880000  lh          $t0, 0x0($t4)
    ctx->pc = 0x4ec2d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ec2dc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec2e0: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4ec2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ec2e4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ec2e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ec2e8: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4ec2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4ec2ec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ec2ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ec2f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec2f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ec2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ec2f8: 0x85670000  lh          $a3, 0x0($t3)
    ctx->pc = 0x4ec2f8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ec2fc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ec2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ec300: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ec300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ec304: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4ec304u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4ec308: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x4ec308u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x4ec30c: 0x894824  and         $t1, $a0, $t1
    ctx->pc = 0x4ec30cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x4ec310: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x4ec310u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x4ec314: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4ec314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec318: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ec318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ec31c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ec31cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ec320: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4ec320u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4ec324: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4ec324u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4ec328: 0xa84024  and         $t0, $a1, $t0
    ctx->pc = 0x4ec328u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4ec32c: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x4ec32cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x4ec330: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4ec330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ec334: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ec334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ec338: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ec338u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ec33c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4ec33cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4ec340: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4ec340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4ec344: 0xc73824  and         $a3, $a2, $a3
    ctx->pc = 0x4ec344u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4ec348: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4ec348u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x4ec34c: 0x8602015a  lh          $v0, 0x15A($s0)
    ctx->pc = 0x4ec34cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 346)));
    // 0x4ec350: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec354: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec358: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4ec358u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4ec35c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec360: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4ec360u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ec364: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ec364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ec368: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4ec368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4ec36c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec370: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec374: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4ec374u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4ec378: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec37c: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4ec37cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ec380: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4ec380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4ec384: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec388: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec38c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4ec38cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4ec390: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4ec390u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ec394: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x4ec394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4ec398: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4EC398u;
    {
        const bool branch_taken_0x4ec398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ec398) {
            ctx->pc = 0x4EC39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EC398u;
            // 0x4ec39c: 0x8da40000  lw          $a0, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EC3B8u;
            goto label_4ec3b8;
        }
    }
    ctx->pc = 0x4EC3A0u;
    // 0x4ec3a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ec3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ec3a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec3a8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ec3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4ec3ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec3b0: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4ec3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4ec3b4: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x4ec3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4ec3b8:
    // 0x4ec3b8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4ec3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec3bc: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4EC3BCu;
    SET_GPR_U32(ctx, 31, 0x4EC3C4u);
    ctx->pc = 0x4EC3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC3BCu;
    // 0x4ec3c0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4EC3BCu, 0x4EC3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC3C4u;
label_4ec3c4:
    // 0x4ec3c4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4EC3C4u;
    {
        const bool branch_taken_0x4ec3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ec3c4) {
            ctx->pc = 0x4EC3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EC3C4u;
            // 0x4ec3c8: 0x96c30000  lhu         $v1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EC418u;
            goto label_4ec418;
        }
    }
    ctx->pc = 0x4EC3CCu;
    // 0x4ec3cc: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x4ec3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x4ec3d0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ec3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ec3d4: 0x246311e8  addiu       $v1, $v1, 0x11E8
    ctx->pc = 0x4ec3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4584));
    // 0x4ec3d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4ec3d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F11E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11E8u, _value); } while (0);
    // 0x4ec3dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ec3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ec3e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ec3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ec3e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4ec3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4ec3e8: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x4ec3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x4ec3ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4ec3ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F11E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11E8u, _value); } while (0);
    // 0x4ec3f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4ec3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec3f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ec3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ec3f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4ec3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4ec3fc: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x4ec3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x4ec400: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4ec400u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F11E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11E8u, _value); } while (0);
    // 0x4ec404: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4ec404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ec408: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ec408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ec40c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4EC40Cu;
    {
        const bool branch_taken_0x4ec40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC40Cu;
        // 0x4ec410: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec40c) {
            ctx->pc = 0x4EC478u;
            goto label_4ec478;
        }
    }
    ctx->pc = 0x4EC414u;
    // 0x4ec414: 0x0  nop
    ctx->pc = 0x4ec414u;
    // NOP
label_4ec418:
    // 0x4ec418: 0x26050164  addiu       $a1, $s0, 0x164
    ctx->pc = 0x4ec418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x4ec41c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ec41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ec420: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ec420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ec424: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec428: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec42c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ec42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ec430: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4ec430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4ec434: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x4ec434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ec438: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4ec438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec43c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ec43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ec440: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec444: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec448: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ec448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ec44c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4ec44cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4ec450: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4ec450u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ec454: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4ec454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ec458: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ec458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ec45c: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4ec45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4ec460: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec464: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ec464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ec468: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4ec468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4ec46c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ec46cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ec470: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ec470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ec474: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4ec474u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ec478:
    // 0x4ec478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ec478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ec47c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ec47cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ec480: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ec480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ec484: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ec484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ec488: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ec488u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ec48c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ec48cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ec490: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ec490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ec494: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ec494u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ec498: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ec498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ec49c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EC49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC49Cu;
        // 0x4ec4a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EC4A4u;
    // 0x4ec4a4: 0x0  nop
    ctx->pc = 0x4ec4a4u;
    // NOP
    ctx->pc = 0x4ec4a8u;
}
