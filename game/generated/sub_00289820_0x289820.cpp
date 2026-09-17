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

// Function: sub_00289820
// Address: 0x289820 - 0x289e70
void sub_00289820_0x289820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289820_0x289820");
#endif

    switch (ctx->pc) {
        case 0x28986cu: goto label_28986c;
        case 0x289c54u: goto label_289c54;
        case 0x289c6cu: goto label_289c6c;
        case 0x289c7cu: goto label_289c7c;
        case 0x289d10u: goto label_289d10;
        case 0x289d28u: goto label_289d28;
        case 0x289d8cu: goto label_289d8c;
        case 0x289e1cu: goto label_289e1c;
        case 0x289e40u: goto label_289e40;
        default: break;
    }

    ctx->pc = 0x289820u;

    // 0x289820: 0x8f82b390  lw          $v0, -0x4C70($gp)
    ctx->pc = 0x289820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947728)));
    // 0x289824: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x289824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x289828: 0xffbe0480  sd          $fp, 0x480($sp)
    ctx->pc = 0x289828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 30));
    // 0x28982c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x28982cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289830: 0xffb00440  sd          $s0, 0x440($sp)
    ctx->pc = 0x289830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 16));
    // 0x289834: 0xffb10448  sd          $s1, 0x448($sp)
    ctx->pc = 0x289834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 17));
    // 0x289838: 0xffb20450  sd          $s2, 0x450($sp)
    ctx->pc = 0x289838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 18));
    // 0x28983c: 0xffb30458  sd          $s3, 0x458($sp)
    ctx->pc = 0x28983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 19));
    // 0x289840: 0xffb40460  sd          $s4, 0x460($sp)
    ctx->pc = 0x289840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 20));
    // 0x289844: 0xffb50468  sd          $s5, 0x468($sp)
    ctx->pc = 0x289844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 21));
    // 0x289848: 0xffb60470  sd          $s6, 0x470($sp)
    ctx->pc = 0x289848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 22));
    // 0x28984c: 0xffb70478  sd          $s7, 0x478($sp)
    ctx->pc = 0x28984cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1144), GPR_U64(ctx, 23));
    // 0x289850: 0x14400169  bnez        $v0, . + 4 + (0x169 << 2)
    ctx->pc = 0x289850u;
    {
        const bool branch_taken_0x289850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289850u;
        // 0x289854: 0xffbf0488  sd          $ra, 0x488($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289850) {
            ctx->pc = 0x289DF8u;
            goto label_289df8;
        }
    }
    ctx->pc = 0x289858u;
    // 0x289858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x289858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28985c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28985cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289860: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x289860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x289864: 0xc04a151  jal         func_128544
    ctx->pc = 0x289864u;
    SET_GPR_U32(ctx, 31, 0x28986Cu);
    ctx->pc = 0x289868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289864u;
    // 0x289868: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x289864u, 0x28986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28986Cu;
label_28986c:
    // 0x28986c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28986cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x289870: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x289870u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x289874: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x289874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289878: 0x2412001b  addiu       $s2, $zero, 0x1B
    ctx->pc = 0x289878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x28987c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x28987cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289880: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x289880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289884: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x289884u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x289888: 0x2419000e  addiu       $t9, $zero, 0xE
    ctx->pc = 0x289888u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x28988c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x28988cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x289890: 0x24e79830  addiu       $a3, $a3, -0x67D0
    ctx->pc = 0x289890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940720));
    // 0x289894: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x289894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x289898: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x289898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28989c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x28989cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2898a0: 0x24150017  addiu       $s5, $zero, 0x17
    ctx->pc = 0x2898a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2898a4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2898a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2898a8: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x2898a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x2898ac: 0x27a4033c  addiu       $a0, $sp, 0x33C
    ctx->pc = 0x2898acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 828));
    // 0x2898b0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2898b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2898b4: 0x2418001a  addiu       $t8, $zero, 0x1A
    ctx->pc = 0x2898b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2898b8: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x2898b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x2898bc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2898bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2898c0: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x2898c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x2898c4: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2898c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2898c8: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x2898c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x2898cc: 0x3c0d0048  lui         $t5, 0x48
    ctx->pc = 0x2898ccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)72 << 16));
    // 0x2898d0: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x2898d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x2898d4: 0x3c0c0048  lui         $t4, 0x48
    ctx->pc = 0x2898d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)72 << 16));
    // 0x2898d8: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x2898d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x2898dc: 0x3c0e0048  lui         $t6, 0x48
    ctx->pc = 0x2898dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)72 << 16));
    // 0x2898e0: 0xafb30034  sw          $s3, 0x34($sp)
    ctx->pc = 0x2898e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 19));
    // 0x2898e4: 0x258c9858  addiu       $t4, $t4, -0x67A8
    ctx->pc = 0x2898e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294940760));
    // 0x2898e8: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x2898e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x2898ec: 0x25ad9840  addiu       $t5, $t5, -0x67C0
    ctx->pc = 0x2898ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294940736));
    // 0x2898f0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2898f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x2898f4: 0x25ce9870  addiu       $t6, $t6, -0x6790
    ctx->pc = 0x2898f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294940784));
    // 0x2898f8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2898f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2898fc: 0x24170012  addiu       $s7, $zero, 0x12
    ctx->pc = 0x2898fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x289900: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x289900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x289904: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x289904u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x289908: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x289908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    // 0x28990c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28990cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289910: 0xafb0004c  sw          $s0, 0x4C($sp)
    ctx->pc = 0x289910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
    // 0x289914: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x289914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x289918: 0xafb20050  sw          $s2, 0x50($sp)
    ctx->pc = 0x289918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 18));
    // 0x28991c: 0x26d633c0  addiu       $s6, $s6, 0x33C0
    ctx->pc = 0x28991cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 13248));
    // 0x289920: 0xafb10054  sw          $s1, 0x54($sp)
    ctx->pc = 0x289920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 17));
    // 0x289924: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x289924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x289928: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x289928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x28992c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x28992cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x289930: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x289930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x289934: 0xafb40068  sw          $s4, 0x68($sp)
    ctx->pc = 0x289934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 20));
    // 0x289938: 0xafb3006c  sw          $s3, 0x6C($sp)
    ctx->pc = 0x289938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
    // 0x28993c: 0xafb30070  sw          $s3, 0x70($sp)
    ctx->pc = 0x28993cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 19));
    // 0x289940: 0xafab0074  sw          $t3, 0x74($sp)
    ctx->pc = 0x289940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 11));
    // 0x289944: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x289944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
    // 0x289948: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x289948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x28994c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x28994cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x289950: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x289950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x289954: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x289954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x289958: 0xafb0008c  sw          $s0, 0x8C($sp)
    ctx->pc = 0x289958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 16));
    // 0x28995c: 0xafab0094  sw          $t3, 0x94($sp)
    ctx->pc = 0x28995cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 11));
    // 0x289960: 0xafb90098  sw          $t9, 0x98($sp)
    ctx->pc = 0x289960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 25));
    // 0x289964: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x289964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x289968: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x289968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x28996c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x28996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x289970: 0xafa70114  sw          $a3, 0x114($sp)
    ctx->pc = 0x289970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 7));
    // 0x289974: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x289974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x289978: 0xafa800e0  sw          $t0, 0xE0($sp)
    ctx->pc = 0x289978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 8));
    // 0x28997c: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x28997cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x289980: 0x3403e400  ori         $v1, $zero, 0xE400
    ctx->pc = 0x289980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
    // 0x289984: 0xafa70124  sw          $a3, 0x124($sp)
    ctx->pc = 0x289984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 7));
    // 0x289988: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x289988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28998c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x28998cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x289990: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x289990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x289994: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x289994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x289998: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x289998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x28999c: 0xafb000b4  sw          $s0, 0xB4($sp)
    ctx->pc = 0x28999cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 16));
    // 0x2899a0: 0xafb200bc  sw          $s2, 0xBC($sp)
    ctx->pc = 0x2899a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 18));
    // 0x2899a4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2899a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2899a8: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x2899a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x2899ac: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x2899acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x2899b0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2899b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x2899b4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2899b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x2899b8: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x2899b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x2899bc: 0xafa900d8  sw          $t1, 0xD8($sp)
    ctx->pc = 0x2899bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 9));
    // 0x2899c0: 0xafb100dc  sw          $s1, 0xDC($sp)
    ctx->pc = 0x2899c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 17));
    // 0x2899c4: 0xafaa00e4  sw          $t2, 0xE4($sp)
    ctx->pc = 0x2899c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 10));
    // 0x2899c8: 0xafb500e8  sw          $s5, 0xE8($sp)
    ctx->pc = 0x2899c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 21));
    // 0x2899cc: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x2899ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x2899d0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2899d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2899d4: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x2899d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x2899d8: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x2899d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x2899dc: 0xafb80104  sw          $t8, 0x104($sp)
    ctx->pc = 0x2899dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 24));
    // 0x2899e0: 0xafb10100  sw          $s1, 0x100($sp)
    ctx->pc = 0x2899e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 17));
    // 0x2899e4: 0xafa90108  sw          $t1, 0x108($sp)
    ctx->pc = 0x2899e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 9));
    // 0x2899e8: 0xafb5010c  sw          $s5, 0x10C($sp)
    ctx->pc = 0x2899e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 21));
    // 0x2899ec: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x2899ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x2899f0: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x2899f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x2899f4: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x2899f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x2899f8: 0xafb00120  sw          $s0, 0x120($sp)
    ctx->pc = 0x2899f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 16));
    // 0x2899fc: 0xafb20128  sw          $s2, 0x128($sp)
    ctx->pc = 0x2899fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 18));
    // 0x289a00: 0xafa80148  sw          $t0, 0x148($sp)
    ctx->pc = 0x289a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 8));
    // 0x289a04: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x289a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x289a08: 0xafa8014c  sw          $t0, 0x14C($sp)
    ctx->pc = 0x289a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 8));
    // 0x289a0c: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x289a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x289a10: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x289a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x289a14: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x289a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x289a18: 0xafa70174  sw          $a3, 0x174($sp)
    ctx->pc = 0x289a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 7));
    // 0x289a1c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x289a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x289a20: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x289a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x289a24: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x289a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x289a28: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x289a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x289a2c: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x289a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x289a30: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x289a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x289a34: 0xafb00140  sw          $s0, 0x140($sp)
    ctx->pc = 0x289a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 16));
    // 0x289a38: 0xafb30144  sw          $s3, 0x144($sp)
    ctx->pc = 0x289a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 19));
    // 0x289a3c: 0xafb20150  sw          $s2, 0x150($sp)
    ctx->pc = 0x289a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 18));
    // 0x289a40: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x289a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x289a44: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x289a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x289a48: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x289a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x289a4c: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x289a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x289a50: 0xafb00164  sw          $s0, 0x164($sp)
    ctx->pc = 0x289a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 16));
    // 0x289a54: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x289a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
    // 0x289a58: 0xafb1016c  sw          $s1, 0x16C($sp)
    ctx->pc = 0x289a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 17));
    // 0x289a5c: 0xafaf0170  sw          $t7, 0x170($sp)
    ctx->pc = 0x289a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 15));
    // 0x289a60: 0xafb50178  sw          $s5, 0x178($sp)
    ctx->pc = 0x289a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 21));
    // 0x289a64: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x289a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x289a68: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x289a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x289a6c: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x289a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x289a70: 0xafa90190  sw          $t1, 0x190($sp)
    ctx->pc = 0x289a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 9));
    // 0x289a74: 0xafb0018c  sw          $s0, 0x18C($sp)
    ctx->pc = 0x289a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 16));
    // 0x289a78: 0xafb20194  sw          $s2, 0x194($sp)
    ctx->pc = 0x289a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 18));
    // 0x289a7c: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x289a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x289a80: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x289a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
    // 0x289a84: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x289a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x289a88: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x289a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x289a8c: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x289a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
    // 0x289a90: 0xafb001ac  sw          $s0, 0x1AC($sp)
    ctx->pc = 0x289a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 16));
    // 0x289a94: 0xafb901b8  sw          $t9, 0x1B8($sp)
    ctx->pc = 0x289a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 25));
    // 0x289a98: 0xafa801b4  sw          $t0, 0x1B4($sp)
    ctx->pc = 0x289a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 8));
    // 0x289a9c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x289a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x289aa0: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x289aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x289aa4: 0xafb301b0  sw          $s3, 0x1B0($sp)
    ctx->pc = 0x289aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 19));
    // 0x289aa8: 0xafb201bc  sw          $s2, 0x1BC($sp)
    ctx->pc = 0x289aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 18));
    // 0x289aac: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x289aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
    // 0x289ab0: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x289ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
    // 0x289ab4: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x289ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x289ab8: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x289ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
    // 0x289abc: 0xafb001d0  sw          $s0, 0x1D0($sp)
    ctx->pc = 0x289abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 16));
    // 0x289ac0: 0xafa301dc  sw          $v1, 0x1DC($sp)
    ctx->pc = 0x289ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 3));
    // 0x289ac4: 0xafaa01d8  sw          $t2, 0x1D8($sp)
    ctx->pc = 0x289ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 10));
    // 0x289ac8: 0xafb501e0  sw          $s5, 0x1E0($sp)
    ctx->pc = 0x289ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 21));
    // 0x289acc: 0xafa001e4  sw          $zero, 0x1E4($sp)
    ctx->pc = 0x289accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
    // 0x289ad0: 0xafa001e8  sw          $zero, 0x1E8($sp)
    ctx->pc = 0x289ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 0));
    // 0x289ad4: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x289ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x289ad8: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x289ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x289adc: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x289adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x289ae0: 0xafaa01fc  sw          $t2, 0x1FC($sp)
    ctx->pc = 0x289ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 10));
    // 0x289ae4: 0xafb401f8  sw          $s4, 0x1F8($sp)
    ctx->pc = 0x289ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 20));
    // 0x289ae8: 0xafa70200  sw          $a3, 0x200($sp)
    ctx->pc = 0x289ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 7));
    // 0x289aec: 0x8fc30060  lw          $v1, 0x60($fp)
    ctx->pc = 0x289aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x289af0: 0x8fc7005c  lw          $a3, 0x5C($fp)
    ctx->pc = 0x289af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x289af4: 0xafa80224  sw          $t0, 0x224($sp)
    ctx->pc = 0x289af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 8));
    // 0x289af8: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x289af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x289afc: 0xafa8021c  sw          $t0, 0x21C($sp)
    ctx->pc = 0x289afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 8));
    // 0x289b00: 0x24080013  addiu       $t0, $zero, 0x13
    ctx->pc = 0x289b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x289b04: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x289b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x289b08: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x289b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x289b0c: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x289b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x289b10: 0xafa00208  sw          $zero, 0x208($sp)
    ctx->pc = 0x289b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 0));
    // 0x289b14: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x289b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x289b18: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x289b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x289b1c: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x289b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x289b20: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x289b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x289b24: 0xafb10220  sw          $s1, 0x220($sp)
    ctx->pc = 0x289b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 17));
    // 0x289b28: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x289b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    // 0x289b2c: 0xafa30254  sw          $v1, 0x254($sp)
    ctx->pc = 0x289b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 3));
    // 0x289b30: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x289b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x289b34: 0xafa7025c  sw          $a3, 0x25C($sp)
    ctx->pc = 0x289b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 7));
    // 0x289b38: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x289b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x289b3c: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x289b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
    // 0x289b40: 0xafa302b4  sw          $v1, 0x2B4($sp)
    ctx->pc = 0x289b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 3));
    // 0x289b44: 0x240303c4  addiu       $v1, $zero, 0x3C4
    ctx->pc = 0x289b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x289b48: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x289b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x289b4c: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x289b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x289b50: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x289b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x289b54: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x289b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
    // 0x289b58: 0xafa70288  sw          $a3, 0x288($sp)
    ctx->pc = 0x289b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 7));
    // 0x289b5c: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x289b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x289b60: 0xafa80290  sw          $t0, 0x290($sp)
    ctx->pc = 0x289b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 8));
    // 0x289b64: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x289b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x289b68: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x289b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x289b6c: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x289b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
    // 0x289b70: 0xafa202bc  sw          $v0, 0x2BC($sp)
    ctx->pc = 0x289b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
    // 0x289b74: 0xafa302c0  sw          $v1, 0x2C0($sp)
    ctx->pc = 0x289b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 3));
    // 0x289b78: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x289b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x289b7c: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x289b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
    // 0x289b80: 0xafa00238  sw          $zero, 0x238($sp)
    ctx->pc = 0x289b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
    // 0x289b84: 0xafa0023c  sw          $zero, 0x23C($sp)
    ctx->pc = 0x289b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
    // 0x289b88: 0xafad0258  sw          $t5, 0x258($sp)
    ctx->pc = 0x289b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 13));
    // 0x289b8c: 0xafaf0240  sw          $t7, 0x240($sp)
    ctx->pc = 0x289b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 15));
    // 0x289b90: 0xafb10244  sw          $s1, 0x244($sp)
    ctx->pc = 0x289b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 17));
    // 0x289b94: 0xafb70248  sw          $s7, 0x248($sp)
    ctx->pc = 0x289b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 23));
    // 0x289b98: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x289b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
    // 0x289b9c: 0xafb7026c  sw          $s7, 0x26C($sp)
    ctx->pc = 0x289b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 23));
    // 0x289ba0: 0xafb10268  sw          $s1, 0x268($sp)
    ctx->pc = 0x289ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 17));
    // 0x289ba4: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x289ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
    // 0x289ba8: 0xafac027c  sw          $t4, 0x27C($sp)
    ctx->pc = 0x289ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 12));
    // 0x289bac: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x289bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
    // 0x289bb0: 0xafa00284  sw          $zero, 0x284($sp)
    ctx->pc = 0x289bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 0));
    // 0x289bb4: 0xafae02a0  sw          $t6, 0x2A0($sp)
    ctx->pc = 0x289bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 14));
    // 0x289bb8: 0xafb1028c  sw          $s1, 0x28C($sp)
    ctx->pc = 0x289bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 17));
    // 0x289bbc: 0xafa0029c  sw          $zero, 0x29C($sp)
    ctx->pc = 0x289bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 0));
    // 0x289bc0: 0xafa002a4  sw          $zero, 0x2A4($sp)
    ctx->pc = 0x289bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 0));
    // 0x289bc4: 0xafa002a8  sw          $zero, 0x2A8($sp)
    ctx->pc = 0x289bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
    // 0x289bc8: 0xafac02c4  sw          $t4, 0x2C4($sp)
    ctx->pc = 0x289bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 12));
    // 0x289bcc: 0xafa202b8  sw          $v0, 0x2B8($sp)
    ctx->pc = 0x289bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
    // 0x289bd0: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x289bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x289bd4: 0xafa702d8  sw          $a3, 0x2D8($sp)
    ctx->pc = 0x289bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 7));
    // 0x289bd8: 0xafa702d0  sw          $a3, 0x2D0($sp)
    ctx->pc = 0x289bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 7));
    // 0x289bdc: 0xafa802f8  sw          $t0, 0x2F8($sp)
    ctx->pc = 0x289bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 8));
    // 0x289be0: 0xafa30320  sw          $v1, 0x320($sp)
    ctx->pc = 0x289be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 3));
    // 0x289be4: 0xafb602c8  sw          $s6, 0x2C8($sp)
    ctx->pc = 0x289be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 22));
    // 0x289be8: 0xafaf02ac  sw          $t7, 0x2AC($sp)
    ctx->pc = 0x289be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 15));
    // 0x289bec: 0xafb102b0  sw          $s1, 0x2B0($sp)
    ctx->pc = 0x289becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 17));
    // 0x289bf0: 0xafa002cc  sw          $zero, 0x2CC($sp)
    ctx->pc = 0x289bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 0));
    // 0x289bf4: 0xafb102d4  sw          $s1, 0x2D4($sp)
    ctx->pc = 0x289bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 17));
    // 0x289bf8: 0xafa002dc  sw          $zero, 0x2DC($sp)
    ctx->pc = 0x289bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 0));
    // 0x289bfc: 0xafa002e0  sw          $zero, 0x2E0($sp)
    ctx->pc = 0x289bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 0));
    // 0x289c00: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x289c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
    // 0x289c04: 0xafa002e8  sw          $zero, 0x2E8($sp)
    ctx->pc = 0x289c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 0));
    // 0x289c08: 0xafa002ec  sw          $zero, 0x2EC($sp)
    ctx->pc = 0x289c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 0));
    // 0x289c0c: 0xafa002f0  sw          $zero, 0x2F0($sp)
    ctx->pc = 0x289c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 0));
    // 0x289c10: 0xafb002f4  sw          $s0, 0x2F4($sp)
    ctx->pc = 0x289c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 16));
    // 0x289c14: 0xafb202fc  sw          $s2, 0x2FC($sp)
    ctx->pc = 0x289c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 18));
    // 0x289c18: 0xafa00300  sw          $zero, 0x300($sp)
    ctx->pc = 0x289c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 0));
    // 0x289c1c: 0xafa00304  sw          $zero, 0x304($sp)
    ctx->pc = 0x289c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 0));
    // 0x289c20: 0xafa00308  sw          $zero, 0x308($sp)
    ctx->pc = 0x289c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 0));
    // 0x289c24: 0xafa0030c  sw          $zero, 0x30C($sp)
    ctx->pc = 0x289c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 0));
    // 0x289c28: 0xafa00310  sw          $zero, 0x310($sp)
    ctx->pc = 0x289c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 0));
    // 0x289c2c: 0xafa00314  sw          $zero, 0x314($sp)
    ctx->pc = 0x289c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 0));
    // 0x289c30: 0xafaf031c  sw          $t7, 0x31C($sp)
    ctx->pc = 0x289c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 15));
    // 0x289c34: 0xafa20324  sw          $v0, 0x324($sp)
    ctx->pc = 0x289c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 2));
    // 0x289c38: 0xafb00318  sw          $s0, 0x318($sp)
    ctx->pc = 0x289c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 16));
    // 0x289c3c: 0xafa00328  sw          $zero, 0x328($sp)
    ctx->pc = 0x289c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 0));
    // 0x289c40: 0xafa0032c  sw          $zero, 0x32C($sp)
    ctx->pc = 0x289c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 0));
    // 0x289c44: 0xafa00330  sw          $zero, 0x330($sp)
    ctx->pc = 0x289c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
    // 0x289c48: 0xafa00334  sw          $zero, 0x334($sp)
    ctx->pc = 0x289c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 0));
    // 0x289c4c: 0xc04a151  jal         func_128544
    ctx->pc = 0x289C4Cu;
    SET_GPR_U32(ctx, 31, 0x289C54u);
    ctx->pc = 0x289C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C4Cu;
    // 0x289c50: 0xafa00338  sw          $zero, 0x338($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x289C4Cu, 0x289C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C54u;
label_289c54:
    // 0x289c54: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x289c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x289c58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c5c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x289c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x289c60: 0xafb00344  sw          $s0, 0x344($sp)
    ctx->pc = 0x289c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 16));
    // 0x289c64: 0xc04a151  jal         func_128544
    ctx->pc = 0x289C64u;
    SET_GPR_U32(ctx, 31, 0x289C6Cu);
    ctx->pc = 0x289C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C64u;
    // 0x289c68: 0xafb4033c  sw          $s4, 0x33C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x289C64u, 0x289C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C6Cu;
label_289c6c:
    // 0x289c6c: 0x27a40384  addiu       $a0, $sp, 0x384
    ctx->pc = 0x289c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 900));
    // 0x289c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c74: 0xc04a151  jal         func_128544
    ctx->pc = 0x289C74u;
    SET_GPR_U32(ctx, 31, 0x289C7Cu);
    ctx->pc = 0x289C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C74u;
    // 0x289c78: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x289C74u, 0x289C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C7Cu;
label_289c7c:
    // 0x289c7c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x289c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x289c80: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x289c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x289c84: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x289c84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x289c88: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x289c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x289c8c: 0x27a40414  addiu       $a0, $sp, 0x414
    ctx->pc = 0x289c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1044));
    // 0x289c90: 0xafa703a8  sw          $a3, 0x3A8($sp)
    ctx->pc = 0x289c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 936), GPR_U32(ctx, 7));
    // 0x289c94: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x289c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x289c98: 0xafa803b0  sw          $t0, 0x3B0($sp)
    ctx->pc = 0x289c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 8));
    // 0x289c9c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x289c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x289ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ca4: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x289ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x289ca8: 0xafa303d8  sw          $v1, 0x3D8($sp)
    ctx->pc = 0x289ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 984), GPR_U32(ctx, 3));
    // 0x289cac: 0xafb103ac  sw          $s1, 0x3AC($sp)
    ctx->pc = 0x289cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 17));
    // 0x289cb0: 0xafa703b4  sw          $a3, 0x3B4($sp)
    ctx->pc = 0x289cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 948), GPR_U32(ctx, 7));
    // 0x289cb4: 0xafb503b8  sw          $s5, 0x3B8($sp)
    ctx->pc = 0x289cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 952), GPR_U32(ctx, 21));
    // 0x289cb8: 0xafa003bc  sw          $zero, 0x3BC($sp)
    ctx->pc = 0x289cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 956), GPR_U32(ctx, 0));
    // 0x289cbc: 0xafa003c0  sw          $zero, 0x3C0($sp)
    ctx->pc = 0x289cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 0));
    // 0x289cc0: 0xafa003c4  sw          $zero, 0x3C4($sp)
    ctx->pc = 0x289cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 964), GPR_U32(ctx, 0));
    // 0x289cc4: 0xafa003c8  sw          $zero, 0x3C8($sp)
    ctx->pc = 0x289cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 968), GPR_U32(ctx, 0));
    // 0x289cc8: 0xafa803d0  sw          $t0, 0x3D0($sp)
    ctx->pc = 0x289cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 8));
    // 0x289ccc: 0xafa203d4  sw          $v0, 0x3D4($sp)
    ctx->pc = 0x289cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 980), GPR_U32(ctx, 2));
    // 0x289cd0: 0xafb303cc  sw          $s3, 0x3CC($sp)
    ctx->pc = 0x289cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 19));
    // 0x289cd4: 0xafa003dc  sw          $zero, 0x3DC($sp)
    ctx->pc = 0x289cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 988), GPR_U32(ctx, 0));
    // 0x289cd8: 0xafa003e0  sw          $zero, 0x3E0($sp)
    ctx->pc = 0x289cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 0));
    // 0x289cdc: 0xafa003e4  sw          $zero, 0x3E4($sp)
    ctx->pc = 0x289cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 996), GPR_U32(ctx, 0));
    // 0x289ce0: 0xafa003e8  sw          $zero, 0x3E8($sp)
    ctx->pc = 0x289ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1000), GPR_U32(ctx, 0));
    // 0x289ce4: 0xafa003ec  sw          $zero, 0x3EC($sp)
    ctx->pc = 0x289ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 0));
    // 0x289ce8: 0xafb303f0  sw          $s3, 0x3F0($sp)
    ctx->pc = 0x289ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 19));
    // 0x289cec: 0xafb503f4  sw          $s5, 0x3F4($sp)
    ctx->pc = 0x289cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1012), GPR_U32(ctx, 21));
    // 0x289cf0: 0xafb403f8  sw          $s4, 0x3F8($sp)
    ctx->pc = 0x289cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1016), GPR_U32(ctx, 20));
    // 0x289cf4: 0xafb203fc  sw          $s2, 0x3FC($sp)
    ctx->pc = 0x289cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1020), GPR_U32(ctx, 18));
    // 0x289cf8: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x289cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x289cfc: 0xafa00404  sw          $zero, 0x404($sp)
    ctx->pc = 0x289cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 0));
    // 0x289d00: 0xafa00408  sw          $zero, 0x408($sp)
    ctx->pc = 0x289d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 0));
    // 0x289d04: 0xafa0040c  sw          $zero, 0x40C($sp)
    ctx->pc = 0x289d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 0));
    // 0x289d08: 0xc04a151  jal         func_128544
    ctx->pc = 0x289D08u;
    SET_GPR_U32(ctx, 31, 0x289D10u);
    ctx->pc = 0x289D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D08u;
    // 0x289d0c: 0xafa00410  sw          $zero, 0x410($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x289D08u, 0x289D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D10u;
label_289d10:
    // 0x289d10: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x289d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x289d14: 0x248469f0  addiu       $a0, $a0, 0x69F0
    ctx->pc = 0x289d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27120));
    // 0x289d18: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x289d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x289d1c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x289D1Cu;
    {
        const bool branch_taken_0x289d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D1Cu;
        // 0x289d20: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d1c) {
            ctx->pc = 0x289D88u;
            goto label_289d88;
        }
    }
    ctx->pc = 0x289D24u;
    // 0x289d24: 0x27a20420  addiu       $v0, $sp, 0x420
    ctx->pc = 0x289d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_289d28:
    // 0x289d28: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x289d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x289d2c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x289d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x289d30: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x289d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x289d34: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x289d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x289d38: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x289d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x289d3c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x289d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x289d40: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x289d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x289d44: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x289d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x289d48: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x289d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289d4c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x289d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289d50: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x289d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289d54: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x289d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289d58: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x289d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289d5c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x289d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289d60: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x289d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289d64: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x289d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289d68: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x289d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x289d6c: 0x0  nop
    ctx->pc = 0x289d6cu;
    // NOP
    // 0x289d70: 0x0  nop
    ctx->pc = 0x289d70u;
    // NOP
    // 0x289d74: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x289D74u;
    {
        const bool branch_taken_0x289d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x289D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D74u;
        // 0x289d78: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d74) {
            ctx->pc = 0x289D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289d28;
        }
    }
    ctx->pc = 0x289D7Cu;
    // 0x289d7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x289D7Cu;
    {
        const bool branch_taken_0x289d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289d7c) {
            ctx->pc = 0x289DC0u;
            goto label_289dc0;
        }
    }
    ctx->pc = 0x289D84u;
    // 0x289d84: 0x0  nop
    ctx->pc = 0x289d84u;
    // NOP
label_289d88:
    // 0x289d88: 0x27a20420  addiu       $v0, $sp, 0x420
    ctx->pc = 0x289d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_289d8c:
    // 0x289d8c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x289d8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289d90: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x289d90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x289d94: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x289d94u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x289d98: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x289d98u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x289d9c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x289d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x289da0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x289da0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x289da4: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x289da4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x289da8: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x289da8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x289dac: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x289dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x289db0: 0x0  nop
    ctx->pc = 0x289db0u;
    // NOP
    // 0x289db4: 0x0  nop
    ctx->pc = 0x289db4u;
    // NOP
    // 0x289db8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x289DB8u;
    {
        const bool branch_taken_0x289db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x289DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289DB8u;
        // 0x289dbc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289db8) {
            ctx->pc = 0x289D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289d8c;
        }
    }
    ctx->pc = 0x289DC0u;
label_289dc0:
    // 0x289dc0: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x289dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x289dc4: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x289dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x289dc8: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x289dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x289dcc: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x289dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x289dd0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x289dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x289dd4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x289dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x289dd8: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x289dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289ddc: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x289ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289de0: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x289de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289de4: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x289de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289de8: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x289de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289df0: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x289df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289df4: 0xaf82b390  sw          $v0, -0x4C70($gp)
    ctx->pc = 0x289df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947728), GPR_U32(ctx, 2));
label_289df8:
    // 0x289df8: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x289df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x289dfc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x289DFCu;
    {
        const bool branch_taken_0x289dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289DFCu;
        // 0x289e00: 0xdfb00440  ld          $s0, 0x440($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289dfc) {
            ctx->pc = 0x289E44u;
            goto label_289e44;
        }
    }
    ctx->pc = 0x289E04u;
    // 0x289e04: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x289e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x289e08: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x289E08u;
    {
        const bool branch_taken_0x289e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E08u;
        // 0x289e0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e08) {
            ctx->pc = 0x289E44u;
            goto label_289e44;
        }
    }
    ctx->pc = 0x289E10u;
    // 0x289e10: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x289e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e14: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x289E14u;
    SET_GPR_U32(ctx, 31, 0x289E1Cu);
    ctx->pc = 0x289E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E14u;
    // 0x289e18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2875E8u, 0x289E14u, 0x289E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E1Cu;
label_289e1c:
    // 0x289e1c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x289e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x289e20: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x289e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x289e24: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x289e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x289e28: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x289e28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x289e2c: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x289e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x289e30: 0x242169f0  addiu       $at, $at, 0x69F0
    ctx->pc = 0x289e30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 27120));
    // 0x289e34: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x289e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x289e38: 0xc0a1c7a  jal         func_2871E8
    ctx->pc = 0x289E38u;
    SET_GPR_U32(ctx, 31, 0x289E40u);
    ctx->pc = 0x289E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E38u;
    // 0x289e3c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2871E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2871E8u, 0x289E38u, 0x289E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E40u;
label_289e40:
    // 0x289e40: 0xdfb00440  ld          $s0, 0x440($sp)
    ctx->pc = 0x289e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_289e44:
    // 0x289e44: 0xdfb10448  ld          $s1, 0x448($sp)
    ctx->pc = 0x289e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x289e48: 0xdfb20450  ld          $s2, 0x450($sp)
    ctx->pc = 0x289e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x289e4c: 0xdfb30458  ld          $s3, 0x458($sp)
    ctx->pc = 0x289e4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x289e50: 0xdfb40460  ld          $s4, 0x460($sp)
    ctx->pc = 0x289e50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x289e54: 0xdfb50468  ld          $s5, 0x468($sp)
    ctx->pc = 0x289e54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x289e58: 0xdfb60470  ld          $s6, 0x470($sp)
    ctx->pc = 0x289e58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x289e5c: 0xdfb70478  ld          $s7, 0x478($sp)
    ctx->pc = 0x289e5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1144)));
    // 0x289e60: 0xdfbe0480  ld          $fp, 0x480($sp)
    ctx->pc = 0x289e60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x289e64: 0xdfbf0488  ld          $ra, 0x488($sp)
    ctx->pc = 0x289e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1160)));
    // 0x289e68: 0x3e00008  jr          $ra
    ctx->pc = 0x289E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E68u;
        // 0x289e6c: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289E70u;
}
