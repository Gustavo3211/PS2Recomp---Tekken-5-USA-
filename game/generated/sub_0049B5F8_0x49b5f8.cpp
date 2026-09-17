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

// Function: sub_0049B5F8
// Address: 0x49b5f8 - 0x49b6b8
void sub_0049B5F8_0x49b5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B5F8_0x49b5f8");
#endif

    ctx->pc = 0x49b5f8u;

    // 0x49b5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49b5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49b5fc: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x49b5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x49b600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49b600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49b604: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x49b604u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x49b608: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x49b608u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x49b60c: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x49b60cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x49b610: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x49b610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x49b614: 0x256b0b74  addiu       $t3, $t3, 0xB74
    ctx->pc = 0x49b614u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2932));
    // 0x49b618: 0x258c0b78  addiu       $t4, $t4, 0xB78
    ctx->pc = 0x49b618u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2936));
    // 0x49b61c: 0x25ad0b7c  addiu       $t5, $t5, 0xB7C
    ctx->pc = 0x49b61cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2940));
    // 0x49b620: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x49b620u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0B74u));
    // 0x49b624: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x49b624u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x49b628: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x49b628u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0B78u));
    // 0x49b62c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x49b62cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b630: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x49b630u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0B7Cu));
    // 0x49b634: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x49b634u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x49b638: 0x84c32366  lh          $v1, 0x2366($a2)
    ctx->pc = 0x49b638u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72F9E6u));
    // 0x49b63c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x49b63cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x49b640: 0x84c52368  lh          $a1, 0x2368($a2)
    ctx->pc = 0x49b640u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x72F9E8u));
    // 0x49b644: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x49b644u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x49b648: 0x84c2236a  lh          $v0, 0x236A($a2)
    ctx->pc = 0x49b648u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F9EAu));
    // 0x49b64c: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x49b64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x49b650: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x49b650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x49b654: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x49b654u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x49b658: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x49b658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x49b65c: 0x95ca01b6  lhu         $t2, 0x1B6($t6)
    ctx->pc = 0x49b65cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 438)));
    // 0x49b660: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x49b660u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x49b664: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x49b664u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x49b668: 0xad690000  sw          $t1, 0x0($t3)
    ctx->pc = 0x49b668u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x49b66c: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x49b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x49b670: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x49b670u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x49b674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b678: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x49b678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49b67c: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x49b67cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49b680: 0x95a50000  lhu         $a1, 0x0($t5)
    ctx->pc = 0x49b680u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x49b684: 0xa4ca2332  sh          $t2, 0x2332($a2)
    ctx->pc = 0x49b684u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9010), (uint16_t)GPR_U32(ctx, 10));
    // 0x49b688: 0xa4c22334  sh          $v0, 0x2334($a2)
    ctx->pc = 0x49b688u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b68c: 0xa4c32336  sh          $v1, 0x2336($a2)
    ctx->pc = 0x49b68cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x49b690: 0xa4c52338  sh          $a1, 0x2338($a2)
    ctx->pc = 0x49b690u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9016), (uint16_t)GPR_U32(ctx, 5));
    // 0x49b694: 0x8dc20124  lw          $v0, 0x124($t6)
    ctx->pc = 0x49b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 292)));
    // 0x49b698: 0xacc22340  sw          $v0, 0x2340($a2)
    ctx->pc = 0x49b698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9024), GPR_U32(ctx, 2));
    // 0x49b69c: 0x8dc30128  lw          $v1, 0x128($t6)
    ctx->pc = 0x49b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 296)));
    // 0x49b6a0: 0xacc32344  sw          $v1, 0x2344($a2)
    ctx->pc = 0x49b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9028), GPR_U32(ctx, 3));
    // 0x49b6a4: 0x8dc2012c  lw          $v0, 0x12C($t6)
    ctx->pc = 0x49b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 300)));
    // 0x49b6a8: 0xacc22348  sw          $v0, 0x2348($a2)
    ctx->pc = 0x49b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9032), GPR_U32(ctx, 2));
    // 0x49b6ac: 0x813d6c2  j           func_4F5B08
    ctx->pc = 0x49B6ACu;
    ctx->pc = 0x49B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B6ACu;
    // 0x49b6b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    sub_004F5B08_0x4f5b08(rdram, ctx, runtime); return;
    ctx->pc = 0x49B6B4u;
    // 0x49b6b4: 0x0  nop
    ctx->pc = 0x49b6b4u;
    // NOP
    ctx->pc = 0x49b6b8u;
}
