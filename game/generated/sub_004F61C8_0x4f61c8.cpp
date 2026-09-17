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

// Function: sub_004F61C8
// Address: 0x4f61c8 - 0x4f6328
void sub_004F61C8_0x4f61c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F61C8_0x4f61c8");
#endif

    switch (ctx->pc) {
        case 0x4f61f4u: goto label_4f61f4;
        case 0x4f6300u: goto label_4f6300;
        default: break;
    }

    ctx->pc = 0x4f61c8u;

    // 0x4f61c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f61c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f61cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f61ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f61d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f61d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f61d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f61d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f61d8: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4f61d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4f61dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f61dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f61e0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f61e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f61e4: 0x442004a  bltzl       $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x4F61E4u;
    {
        const bool branch_taken_0x4f61e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f61e4) {
            ctx->pc = 0x4F61E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F61E4u;
            // 0x4f61e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6310u;
            goto label_4f6310;
        }
    }
    ctx->pc = 0x4F61ECu;
    // 0x4f61ec: 0xc12b66e  jal         func_4AD9B8
    ctx->pc = 0x4F61ECu;
    SET_GPR_U32(ctx, 31, 0x4F61F4u);
    ctx->pc = 0x4AD9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD9B8u, 0x4F61ECu, 0x4F61F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F61F4u;
label_4f61f4:
    // 0x4f61f4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f61f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f61f8: 0x260c015e  addiu       $t4, $s0, 0x15E
    ctx->pc = 0x4f61f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4f61fc: 0x26050124  addiu       $a1, $s0, 0x124
    ctx->pc = 0x4f61fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4f6200: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4f6200u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f6204: 0x26090160  addiu       $t1, $s0, 0x160
    ctx->pc = 0x4f6204u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x4f6208: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f6208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f620c: 0x260b0162  addiu       $t3, $s0, 0x162
    ctx->pc = 0x4f620cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 354));
    // 0x4f6210: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6214: 0x26070128  addiu       $a3, $s0, 0x128
    ctx->pc = 0x4f6214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4f6218: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f6218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f621c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f621cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f6220: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6224: 0x260a0164  addiu       $t2, $s0, 0x164
    ctx->pc = 0x4f6224u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x4f6228: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f6228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f622c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f622cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f6230: 0x2608012c  addiu       $t0, $s0, 0x12C
    ctx->pc = 0x4f6230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4f6234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f6234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6238: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4f6238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f623c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f623cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f6240: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6244: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f6244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f6248: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4f6248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f624c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f6250: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6254: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f6254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f6258: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f6258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f625c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f625cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6260: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f6260u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f6264: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f6268: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4f6268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f626c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f6270: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6274: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f6274u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f6278: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x4f6278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4f627c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f6280: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6284: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f6284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f6288: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f6288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f628c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f628cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6290: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f6290u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f6294: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f6298: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4f6298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4f629c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f62a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f62a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f62a4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f62a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f62a8: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4f62a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4f62ac: 0x21480  sll         $v0, $v0, 18
    ctx->pc = 0x4f62acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x4f62b0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x4f62b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x4f62b4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4f62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4f62b8: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4f62b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4f62bc: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4f62bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4f62c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f62c4: 0x8c6383d8  lw          $v1, -0x7C28($v1)
    ctx->pc = 0x4f62c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935512)));
    // 0x4f62c8: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x4f62c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f62cc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4f62ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4f62d0: 0xa5250000  sh          $a1, 0x0($t1)
    ctx->pc = 0x4f62d0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f62d4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f62d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f62d8: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4f62d8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f62dc: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x4f62dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f62e0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4f62e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4f62e4: 0xa5650000  sh          $a1, 0x0($t3)
    ctx->pc = 0x4f62e4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f62e8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f62e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f62ec: 0xa6020032  sh          $v0, 0x32($s0)
    ctx->pc = 0x4f62ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f62f0: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x4f62f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x4f62f4: 0xa6050034  sh          $a1, 0x34($s0)
    ctx->pc = 0x4f62f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f62f8: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4F62F8u;
    SET_GPR_U32(ctx, 31, 0x4F6300u);
    ctx->pc = 0x4F62FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F62F8u;
    // 0x4f62fc: 0xa5400000  sh          $zero, 0x0($t2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4F62F8u, 0x4F6300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6300u;
label_4f6300:
    // 0x4f6300: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f6300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f6304: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f6304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f6308: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f6308u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f630c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f6310:
    // 0x4f6310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f6310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f6314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f6318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f6318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f631c: 0x813d7b6  j           func_4F5ED8
    ctx->pc = 0x4F631Cu;
    ctx->pc = 0x4F6320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F631Cu;
    // 0x4f6320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5ED8u, 0x4F631Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F6324u;
    // 0x4f6324: 0x0  nop
    ctx->pc = 0x4f6324u;
    // NOP
    ctx->pc = 0x4f6328u;
}
